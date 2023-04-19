#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
int quit = 0;
SDL_Point start_point = {0, 0};
SDL_Point end_point = {0, 0};
int line_drawn = 0;

int init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL initialization failed: %s\n", SDL_GetError());
        return -1;
    }

    window = SDL_CreateWindow("Line Drawer",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              SCREEN_WIDTH,
                              SCREEN_HEIGHT,
                              SDL_WINDOW_SHOWN);

    if (window == NULL) {
        printf("Window creation failed: %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        printf("Renderer creation failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

    return 0;
}

void cleanup() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void draw_line(SDL_Point start, SDL_Point end) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(renderer, start.x, start.y, end.x, end.y);
    SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[]) {
    if (init() < 0) {
        return -1;
    }

    SDL_Event event;

    while (!quit) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    quit = 1;
                    break;

                case SDL_MOUSEBUTTONDOWN:
                    if (line_drawn) {
                        start_point = end_point;
                        line_drawn = 0;
                    } else {
                        start_point.x = event.button.x;
                        start_point.y = event.button.y;
                        line_drawn = 1;
                    }
                    break;

                case SDL_MOUSEBUTTONUP:
                    if (line_drawn) {
                        end_point.x = event.button.x;
                        end_point.y = event.button.y;
                        draw_line(start_point, end_point);
                        line_drawn = 0;
                    }
                    break;
            }
        }
    }

    cleanup();
    return 0;
}

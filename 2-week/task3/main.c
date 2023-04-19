#include <stdio.h>
#include <SDL2/SDL.h>

#define MAX_LINE_COUNT 100

typedef struct {
    int x1, y1;
    int x2, y2;
} Line;

int main(int argc, char* argv[] ) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("Section Drawing Program", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    Line lines[MAX_LINE_COUNT];
    int line_count = 0;

    SDL_Event event;
    while (1) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    SDL_DestroyRenderer(renderer);
                    SDL_DestroyWindow(window);
                    SDL_Quit();
                    return 0;
                case SDL_MOUSEBUTTONUP:
                    if (line_count < MAX_LINE_COUNT) {
                        if (event.button.button == SDL_BUTTON_LEFT) {
                            if (event.button.clicks == 1) {
                                if (lines[line_count].x1 == 0 && lines[line_count].y1 == 0) {
                                    lines[line_count].x1 = event.button.x;
                                    lines[line_count].y1 = event.button.y;
                                } else {
                                    lines[line_count].x2 = event.button.x;
                                    lines[line_count].y2 = event.button.y;
                                    line_count++;
                                }
                            }
                        }
                    }
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        for (int i = 0; i < line_count; i++) {
            SDL_RenderDrawLine(renderer, lines[i].x1, lines[i].y1, lines[i].x2, lines[i].y2);
        }

        SDL_RenderPresent(renderer);
    }

    return 0;
}

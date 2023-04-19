/*
#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    //create window and renderer

    SDL_Window* window = SDL_CreateWindow("SDL2 Rectangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); //Set the colour of the rectangle 

    SDL_Rect rect;  //create ractangle object
    rect.x = 100;
    rect.y = 100;
    rect.w = 200;
    rect.h = 150;

    int quit = 0;
    SDL_Event event;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    quit = 1;
                    break;
            }
        }

        SDL_RenderClear(renderer);  //render the ractangle 
        SDL_RenderFillRect(renderer, &rect);    //update screen 
        SDL_RenderPresent(renderer);    //Handle events
    }

    //clean up and exit 
    SDL_DestroyRenderer(renderer); 
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

*/
//Other version 

#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow("SDL2 Rectangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    SDL_Rect rect;
    rect.x = 100;
    rect.y = 100;
    rect.w = 200;
    rect.h = 150;

    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);

   int quit = 0;
    SDL_Event event;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    quit = 1;
                    break;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

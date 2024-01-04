#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main ( int argc, char **argv )
{
    printf("Ordine-Pico\n");
    printf("%s\n", "Testing this way");

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL initialization failed: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Window creation failed: %s\n", SDL_GetError());
        return 1;
    }

    // Main event loop
    SDL_Event event;
    int quit = 0;

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            } else if (event.type == SDL_KEYDOWN) {
                printf("You pressed: %s\n", SDL_GetKeyName(event.key.keysym.sym));
            }
        }

        // Your rendering and game logic can go here

        SDL_Delay(16); // Add a small delay to control the frame rate
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

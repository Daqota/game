#include <SDL.h>
#include <iostream>

bool running = true;

int main(int argc, char* argv[])
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create a window
    SDL_Window* window = SDL_CreateWindow(
        "My SDL2 Window",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800, 600,
        SDL_WINDOW_SHOWN
    );

    if (window == nullptr) {
        std::cerr << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    //create sdl poll event 
    SDL_Event event;

    while (running) {
        //poll events
        //should move this code to the input layer for key handling
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
                break;
            }
        }

    }
    // Keep window open for 3 seconds
    //SDL_Delay(3000);

    // Clean up
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
//your mom gay
// nu uh!
}

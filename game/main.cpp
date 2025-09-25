
#include <SDL.h>
#include <iostream>
#include <vector>

#include "simpleObject.cpp"
#include "input.cpp"
#include "rendering.cpp"
#include "utils.cpp"
#include "game.cpp"


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
    
    //setup renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    //make sure renderer works
    if (renderer == nullptr) {
        std::cout << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    //enables the use of opacity in SDL funtions
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    //create sdl poll event for user input
    SDL_Event event;
    bool running = true;

    // Setup for time tracking
    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double dt = 0;
    
    while (running) {

        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();

        dt = static_cast<double>(NOW - LAST) / SDL_GetPerformanceFrequency();
    
        handle_input(event, running);
        game(renderer, &input, dt);

    }

    // Clean up
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

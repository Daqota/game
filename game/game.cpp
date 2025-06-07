#include <SDL.h>
#include <iostream>


void game(SDL_Renderer* renderer) {
	// Set background color (e.g., dark blue)
	SDL_SetRenderDrawColor(renderer, 0, 0, 64, 255);
	SDL_RenderClear(renderer);

	// Set draw color for rectangle (e.g., red)
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	// Define rectangle
	SDL_Rect rect = { 200, 150, 400, 300 };

	// Draw filled rectangle
	SDL_RenderFillRect(renderer, &rect);

	// Show result
	SDL_RenderPresent(renderer);
}
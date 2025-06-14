#include <SDL.h>
#include <iostream>
#include <vector>
#include "simpleObject.cpp"

//should make vector classes for this stuff
simpleObject cube = simpleObject();
//simpleObject cube2 = simpleObject(100., 100., 500., 500., 255, 0, 0, 255);
//simpleObject cube3 = simpleObject(500, 300, 200, 200, 255, 0, 255, 255);

std::vector<simpleObject> objects = {
	cube,
	simpleObject(100., 100., 500., 500., 255, 0, 0, 255),
	simpleObject(500, 300, 200, 200, 255, 0, 255, 255)
};


void game(SDL_Renderer* renderer) {
	// Set background color (e.g., dark blue)
	SDL_SetRenderDrawColor(renderer, 0, 0, 64, 255);
	SDL_RenderClear(renderer);

	//loop through all the objects in the objects list and render them
	for (int i = 0; i < objects.size(); i++) {
		simpleObject cur_obj = objects[i];
		SDL_SetRenderDrawColor(renderer, cur_obj.r, cur_obj.g, cur_obj.b, cur_obj.a);

		SDL_Rect rect = { cur_obj.x, cur_obj.y, cur_obj.w, cur_obj.h, };
		SDL_RenderFillRect(renderer, &rect);
	}

	// Set draw color for rectangle (e.g., red)
	//SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	// Define rectangle
	//SDL_Rect rect = { 200, 150, 400, 300 };

	// Draw filled rectangle
	//SDL_RenderFillRect(renderer, &rect);

	// Show result
	SDL_RenderPresent(renderer);
}
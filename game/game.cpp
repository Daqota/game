
Vector2 p_velocity = Vector2(0., 0.);
Vector2 p_acceleration = Vector2(0., 0.);
simpleObject player = simpleObject(100., 100., 50., 50., 0, 0, 255, 255);

std::vector<simpleObject> objects = {
	player,
};

void game(SDL_Renderer* renderer, Input* input, double& dt) {
	p_acceleration.x = 0.;
	p_acceleration.y = 0.;

	// Set background color (e.g., dark blue)
	SDL_SetRenderDrawColor(renderer, 0, 0, 64, 255);
	SDL_RenderClear(renderer);

	if (input->buttons[BUTTON_LEFT].is_down) p_acceleration.x -= 1000.;
	if (input->buttons[BUTTON_RIGHT].is_down) p_acceleration.x += 1000.;
	if (input->buttons[BUTTON_UP].is_down) p_acceleration.y -= 1000.;
	if (input->buttons[BUTTON_DOWN].is_down) p_acceleration.y += 1000.;

	move2d(&objects[0].x, &objects[0].y, &p_velocity, p_acceleration, dt);
	
	//loop through all the objects in the objects list and render them
	for (int i = 0; i < objects.size(); i++) {
		simpleObject cur_obj = objects[i];
		SDL_SetRenderDrawColor(renderer, cur_obj.r, cur_obj.g, cur_obj.b, cur_obj.a);

		SDL_Rect rect = { cur_obj.x, cur_obj.y, cur_obj.w, cur_obj.h, };
		SDL_RenderFillRect(renderer, &rect);
	}
	// Show result
	SDL_RenderPresent(renderer);
}
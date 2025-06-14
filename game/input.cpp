void input(SDL_Event &event, bool &running){

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
            break;
        }
        if (event.type == SDL_KEYDOWN) {
            event.key;
        }
        if (event.type == SDL_KEYUP) {

        }
    }

}
struct ButtonState {
    bool is_down;
    bool changed;
};

enum
{
    BUTTON_UP,
    BUTTON_DOWN,
    BUTTON_LEFT,
    BUTTON_RIGHT,

    BUTTON_COUNT //this is used so the code knows how many different button imputs there are (must be last)
};

struct Input {
    ButtonState buttons[BUTTON_COUNT];
};

Input input = {};

void handle_input(SDL_Event& event, bool& running) {
    for (int i = 0; i < BUTTON_COUNT; i++) {
        input.buttons[i].changed = false;
    }

    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case (SDL_QUIT): {
            running = false;
            break;
        }
        case (SDL_KEYDOWN): {
            if (event.key.keysym.sym == SDLK_UP) {
                input.buttons[BUTTON_UP].is_down = true;
                input.buttons[BUTTON_UP].changed = true;
            }
            if (event.key.keysym.sym == SDLK_DOWN) {
                input.buttons[BUTTON_DOWN].is_down = true;
                input.buttons[BUTTON_DOWN].changed = true;
            }
            if (event.key.keysym.sym == SDLK_LEFT) {
                input.buttons[BUTTON_LEFT].is_down = true;
                input.buttons[BUTTON_LEFT].changed = true;
            }
            if (event.key.keysym.sym == SDLK_RIGHT) {
                input.buttons[BUTTON_RIGHT].is_down = true;
                input.buttons[BUTTON_RIGHT].changed = true;
            }
            break;
        }
        case (SDL_KEYUP): {
            if (event.key.keysym.sym == SDLK_UP) {
                input.buttons[BUTTON_UP].is_down = false;
                input.buttons[BUTTON_UP].changed = true;
            }
            if (event.key.keysym.sym == SDLK_DOWN) {
                input.buttons[BUTTON_DOWN].is_down = false;
                input.buttons[BUTTON_DOWN].changed = true;
            }
            if (event.key.keysym.sym == SDLK_LEFT) {
                input.buttons[BUTTON_LEFT].is_down = false;
                input.buttons[BUTTON_LEFT].changed = true;
            }
            if (event.key.keysym.sym == SDLK_RIGHT) {
                input.buttons[BUTTON_RIGHT].is_down = false;
                input.buttons[BUTTON_RIGHT].changed = true;
            }
            break;
        }
        default:
            break;
        }
    }
}
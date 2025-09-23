struct ButtonState {
    bool is_down;
    bool changed;
};

enum
{
    BUTTON_UP,
    BUTTON_DOWN,

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
            input.buttons[BUTTON_UP].is_down = true;
            input.buttons[BUTTON_UP].changed = true;
        }
        case (SDL_KEYUP): {
        }
        default:
            break;
        }
    }
}
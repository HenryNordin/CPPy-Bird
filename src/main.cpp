#include <iostream>
#include "renderer.h"
#include "game.h"
#include "controller.h"

int main() {
    const int screen_width{400};
    const int screen_height{600};
    const int FPS{60};
    const double MsPerFrame{1000/FPS};

    Renderer renderer(screen_width, screen_height);
    Controller controller;
    // Height, Widt
    Game game(600, 400);
    game.Run(controller, renderer, MsPerFrame);
    std::cout << "Game Over!" << std::endl;
    return 0;
}
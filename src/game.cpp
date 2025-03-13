#include "game.h"
#include "SDL.h"
#include <iostream>
int score = 0;
Game::Game(std::size_t grid_width, std::size_t grid_height) {
    //Code
    
}

void Game::Run(Controller const &controller, Renderer &renderer, double MsPerFrame){
    bool running = true;

    while(running) {
        Update();
        renderer.Render();
    }

}


void Game::Update() {
    //std::cout << "Test" << std::endl;

}

int Game::GetScore() const { return score;}
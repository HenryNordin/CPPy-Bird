#include "game.h"
#include "SDL.h"
#include <iostream>
int score = 0;
Game::Game(std::size_t grid_width, std::size_t grid_height) {
    //Code
    
}

void Game::Run(Controller const &controller, Renderer &renderer, double MsPerFrame){
    bool running = true;
    unsigned int frame_start;
    unsigned int frame_end;
    unsigned int frame_duration;
    int frame_count = 0;
    

    while(running) {
        frame_start = SDL_GetTicks();
        controller.HandleInput(running, bird);
        Update();
        renderer.Render(bird);
        frame_end = SDL_GetTicks();
        
        //std::cout << frame_count << std::endl;

        frame_count++;
        frame_duration = frame_end - frame_start;
        if (frame_duration < MsPerFrame) {
            SDL_Delay(MsPerFrame - frame_duration);
        }
    }

}


void Game::Update() {
    //std::cout << "Test" << std::endl;
    bird.Fall();

}

int Game::GetScore() const { return score;}
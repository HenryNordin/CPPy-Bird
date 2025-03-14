#include "pipe.h"
#include "SDL.h"
#include <iostream>
#include <random>

Pipe::Pipe(float x_start) {
    x = x_start;
    lower_y = 0;

    pipe_gap = 420;
    offscreen = false;
}

void Pipe::Update(){
    MoveLeft();
}

void Pipe::DrawYourself(SDL_Renderer* renderer){
    SDL_Rect block_top;
    block_top.w = 64;
    block_top.h = 256;
    block_top.x = static_cast<int>(x);  // x-coordinate (convert to int)
    block_top.y = static_cast<int>(upper_y);  // y-coordinate (convert to int)

    // Set the color to draw the bird (example: red)
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  // Red color (RGBA)

    // Draw the rectangle (bird)
    SDL_RenderFillRect(renderer, &block_top);


    SDL_Rect block_bottom;
    block_bottom.w = 64;
    block_bottom.h = 256;
    block_bottom.x = static_cast<int>(x);  // x-coordinate (convert to int)
    block_bottom.y = static_cast<int>(lower_y);  // y-coordinate (convert to int)

    // Set the color to draw the bird (example: red)
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  // Red color (RGBA)

    // Draw the rectangle (bird)
    SDL_RenderFillRect(renderer, &block_bottom);
}

void Pipe::MoveLeft(){
    if (offscreen == false) {
        x -= 4;
    }
    if (x <= -64){
        offscreen = true;
        x = 400;
        upper_y = UpperYGenerator();
        lower_y = upper_y + pipe_gap;

    }

    if (x == 400){
        offscreen = false;
    }
}

float Pipe::UpperYGenerator(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0f, (600 - 2 * 32 - pipe_gap));

    return dis(gen) - 100.0f;
}
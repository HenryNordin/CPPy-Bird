#include "bird.h"
#include "SDL.h"
#include <iostream>

Bird::Bird() {
    x = 175;
    y = 0;
    alive = true;
}

void Bird::RoofCollision(){
    if (y <= 0)
    {
        y = 0;
        velocity = 0;
    }
}

void Bird::GroundCollision(){
    if (y >= 450)
    {
        y = 450;
        velocity = 0;
        alive = false;
        //this.sprite = new Image("file:src/gfx/birdsprite_2.png");
    }
}

void Bird::Fly(){
    if (!collided | invincible) {
        velocity = -10.0;
        if (velocity < -2) {
            //this.sprite = new image;
        }
    }
    std::cout << "Fly" << std::endl;
}

void Bird::Fall(){
    velocity += gravity;
    y += velocity;
    if (velocity > 7) {
        velocity = 7;
    }
    if (velocity > 2) {
        //this.sprite = new image;
    }
    //std::cout << "x: " << x << " y: "<<y<< " velocity: "<< velocity << std::endl;
}

void Bird::Update(){
    if (alive) {
        Fall();
    }
    GroundCollision();
    RoofCollision();
}

void Bird::DrawYourself(SDL_Renderer* renderer){
    SDL_Rect block;
    block.w = 32;
    block.h = 32;
    block.x = static_cast<int>(x);  // x-coordinate (convert to int)
    block.y = static_cast<int>(y);  // y-coordinate (convert to int)

    // Set the color to draw the bird (example: red)
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  // Red color (RGBA)

    // Draw the rectangle (bird)
    SDL_RenderFillRect(renderer, &block);
}
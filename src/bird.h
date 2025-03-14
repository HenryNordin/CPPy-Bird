#ifndef BIRD_H
#define BIRD_H

#include "SDL.h"

class Bird {
    public:
        Bird();
        void Update();
        void Fly();
        void Fall();
        void DrawYourself(SDL_Renderer* renderer);
    private:
        SDL_Texture* birdSprite1;    

        bool collided;
        bool invincible;
        bool alive;

        float velocity = 0;

        const double gravity = 0.5;

        float x,y;

        void RoofCollision();
        void GroundCollision();
};

#endif
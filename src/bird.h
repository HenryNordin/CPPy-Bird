#ifndef BIRD_H
#define BIRD_H

#include <string>
#include "SDL.h"

class Bird {
    public:
        Bird();
        bool GetAlive();
        void SetCollided();
        float GetX();
        float GetY();
        void Update();
        void Fly();
        void Fall();
        void DrawYourself(SDL_Renderer* renderer);
    private:
        bool collided;
        bool invincible;
        bool alive;

        float velocity = 0;

        const double gravity = 0.5;

        float x,y;

        void RoofCollision();
        void GroundCollision();

        std::string sprite_path;
        SDL_Texture* sprite;
        SDL_Rect srcRect;
};

#endif
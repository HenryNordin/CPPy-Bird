#ifndef BIRD_H
#define BIRD_H

#include "SDL.h"

class Bird {
    public:
        Bird();
        void Fly();
        void Fall();
        void DrawYourself(SDL_Renderer* renderer);
    private:
    bool collided;
    bool invincible;

    double velocity = 0;

    const double gravity = 0.5;

    double x,y;
};

#endif
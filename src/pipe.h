#ifndef PIPE_H
#define PIPE_H

#include "SDL.h"

class Pipe {
    public:
        Pipe();
        void Update();
        void DrawYourself(SDL_Renderer* renderer);
    private:
        float x,y;
};

#endif
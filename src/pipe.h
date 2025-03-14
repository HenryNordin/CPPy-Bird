#ifndef PIPE_H
#define PIPE_H

#include "SDL.h"

class Pipe {
    public:
        Pipe(float x_start);
        void Update();
        void DrawYourself(SDL_Renderer* renderer);
    private:
        float x, upper_y, lower_y, x_start;
        int pipe_gap;
        void MoveLeft();
        float UpperYGenerator();

        bool offscreen;
};

#endif
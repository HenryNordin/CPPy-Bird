#ifndef PIPE_H
#define PIPE_H

#include <string>
#include "SDL.h"

class Pipe {
    public:
        Pipe(float x_start);
        void Update();
        void DrawYourself(SDL_Renderer* renderer);
    private:
        float x, upper_y, lower_y, x_start;
        const float pipe_gap = 420;
        void MoveLeft();
        float UpperYGenerator();

        bool offscreen;
        std::string sprite_path;
        SDL_Texture* sprite;
};

#endif
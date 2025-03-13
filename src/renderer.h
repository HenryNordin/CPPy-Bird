#ifndef RENDERER_H
#define RENDERER_H

#include "SDL.h"

class Renderer {
    public:
        Renderer(int ScreenWidth, int ScreenHeight);
        ~Renderer();
        void Render();

    private:
        SDL_Window *sdl_window;
        SDL_Renderer *sdl_renderer;
        void Update();

};

#endif
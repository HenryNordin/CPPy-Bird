#ifndef RENDERER_H
#define RENDERER_H

#include "SDL.h"
#include "bird.h"

class Renderer {
    public:
        Renderer(int ScreenWidth, int ScreenHeight);
        ~Renderer();
        void Render(Bird &bird);

    private:
        SDL_Window *sdl_window;
        SDL_Renderer *sdl_renderer;

        void DrawBackground(SDL_Renderer* renderer);
        void DrawGround(SDL_Renderer* renderer);

        void Update();

};

#endif
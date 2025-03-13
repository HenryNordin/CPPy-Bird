#include "renderer.h"
#include "SDL.h"
#include <iostream>

Renderer::Renderer(int screen_width, int screen_height) {
    //Code
    


    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize.\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }

    // Create Window
    sdl_window = SDL_CreateWindow("CCPy Bird", 0,
                                0, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

    if (nullptr == sdl_window) {
        std::cerr << "Window could not be created.\n";
        std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
    }

    // Create renderer
    sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == sdl_renderer) {
        std::cerr << "Renderer could not be created.\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }
}

Renderer::~Renderer() {
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
}


void Renderer::Render(Bird &bird){
    // Clear screen
    SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(sdl_renderer);

    bird.DrawYourself(sdl_renderer);

    // Update Screen
    SDL_RenderPresent(sdl_renderer);
}


void Renderer::Update() {

}
#include "Vector2.h"
#include "Surface.h"
#include <SDL_gesture.h>

#pragma once
namespace Engine {
    class Window {
        public:

        void SetSize(Vector2*);

        void Initialise();

        // Engine::Surface* GetSurface( );

        SDL_Window* GetSdlWindow( );

        void UpdateWindow( );

        Window( );

        Surface* _surfaceWindow;
        private:
        int sizeX, sizeY;
        SDL_Window* _sdlWindow;
    };
}

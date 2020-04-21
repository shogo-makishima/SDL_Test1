#pragma once
#include <SDL_gesture.h>
#include "ColorRGB.h"
#include <array>

namespace Engine {
    class Surface {
        public:


        Surface(SDL_Window* window);
        Surface(char path[]);

        void Move(int x, int y);

        std::array<int, 2> GetPosition( );

        void FillSurface(Engine::Images::ColorRGB* color);

        void SurfaceBlit(Surface* other);

        private:
        SDL_Surface* _sdlSurface;
        SDL_Rect* _sdlRect;
    };
}


#pragma once
#include <SDL_gesture.h>
#include "ColorRGB.h"

namespace Engine {
    class Surface {
        public:

        Surface(SDL_Window* window);
        Surface(char path[]);

        void FillSurface(Engine::Images::ColorRGB* color);

        void SurfaceBlit(Surface* other);

        private:
        SDL_Surface* _sdlSurface;
    };
}


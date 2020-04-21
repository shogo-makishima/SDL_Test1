#include <iostream>

#include "Engine.h"

bool b_run = true;
SDL_Event e;

int main(int argc, char* args[]) {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        return 1;
    }

    Engine::Images::ColorRGB* colorMain = new Engine::Images::ColorRGB(230, 230, 230, "LightGray");
    Engine::Vector2* vector = new Engine::Vector2(500, 500);
    
    char path[] = "C:\\Users\\leshy\\Pictures\\AddImages\\1111.bmp";
    Engine::Surface* imageSurface = new Engine::Surface(path);

    Engine::Window* window = new Engine::Window( );
    window->SetSize(vector);
    window->Initialise();

    window->_surfaceWindow->FillSurface(colorMain);
    window->_surfaceWindow->SurfaceBlit(imageSurface);

    while (b_run) {
        window->_surfaceWindow->FillSurface(colorMain);
        window->_surfaceWindow->SurfaceBlit(imageSurface);
        window->UpdateWindow( );

        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT)
                b_run = false;

            if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                default:
                    std::cout << "Unknown: " << e.key.keysym.sym << std::endl;
                    break;
                case SDLK_UP:
                    std::cout << "Debug: SDLK_UP: " << e.key.keysym.sym << std::endl;
                    imageSurface->Move(0, -10);
                    break;
                case SDLK_DOWN:
                    std::cout << "Debug: SDLK_UP: " << e.key.keysym.sym << std::endl;
                    imageSurface->Move(0, 10);
                    break;
                case SDLK_RIGHT:
                    std::cout << "Debug: SDLK_RIGHT: " << e.key.keysym.sym << std::endl;
                    imageSurface->Move(10, 0);
                    break;
                case SDLK_LEFT:
                    std::cout << "Debug: SDLK_LEFT: " << e.key.keysym.sym << std::endl;
                    imageSurface->Move(-10, 0);
                    break;
                }

                std::cout << "Debug: " << "[" << imageSurface->GetPosition( )[0] << "," << imageSurface->GetPosition( )[1] << "]" << std::endl;
            }
        }
    }

    return 0;
}

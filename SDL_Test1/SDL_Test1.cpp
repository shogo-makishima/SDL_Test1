#include <iostream>
#include "Engine.h"

int main(int argc, char* args[]) {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        return 1;
    }

    Engine::Images::ColorRGB* colorMain = new Engine::Images::ColorRGB(230, 230, 230, "LightGray");
    Engine::Vector2* vector = new Engine::Vector2(500, 500);
    Engine::Window* window = new Engine::Window();
    window->SetSize(vector);

    char path[] = "C:\\Users\\leshy\\Pictures\\AddImages\\1111.bmp";
    Engine::Surface* imageSurface = new Engine::Surface(path);
    window->Initialise();

    window->_surfaceWindow->FillSurface(colorMain);
    window->_surfaceWindow->SurfaceBlit(imageSurface);
    window->UpdateWindow( );

    SDL_Delay(2000);

    return 0;
}

#include "Surface.h"
#include "Engine.h"

Engine::Surface::Surface(SDL_Window* window) {
	_sdlSurface = SDL_GetWindowSurface(window);
}

Engine::Surface::Surface(char path[]) {
	_sdlSurface = SDL_LoadBMP(path);
	std::cout << _sdlSurface << std::endl;
}

void Engine::Surface::FillSurface(Engine::Images::ColorRGB* color) {
	SDL_FillRect(_sdlSurface, NULL, SDL_MapRGB(_sdlSurface->format, color->r, color->g, color->b));
}

void Engine::Surface::SurfaceBlit(Engine::Surface* other) {
	SDL_BlitSurface(other->_sdlSurface, NULL, _sdlSurface, NULL);
}

//void Engine::Surface::FillSurface(Engine::Images::ColorRGB* color) {
	//SDL_FillRect(_sdlSurface, NULL, SDL_MapRGB(_sdlSurface->format, color->r, color->g, color->b));
//}

//void Engine::Surface::SurfaceBlit( ) { }

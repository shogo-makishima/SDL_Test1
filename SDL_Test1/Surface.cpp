#include "Surface.h"
#include "Engine.h"

Engine::Surface::Surface(SDL_Window* window) {
	_sdlSurface = SDL_GetWindowSurface(window);
	_sdlRect = &_sdlSurface->clip_rect;
}

Engine::Surface::Surface(char path[]) {
	_sdlSurface = SDL_LoadBMP(path);
	_sdlRect = &_sdlSurface->clip_rect;
}

void Engine::Surface::FillSurface(Engine::Images::ColorRGB* color) {
	SDL_FillRect(_sdlSurface, NULL, SDL_MapRGB(_sdlSurface->format, color->r, color->g, color->b));
}

void Engine::Surface::SurfaceBlit(Engine::Surface* other) {
	SDL_BlitSurface(other->_sdlSurface, NULL, _sdlSurface, other->_sdlRect);
}

void Engine::Surface::Move(int x, int y) {
	if (_sdlRect->x < 0 || _sdlRect->y < 0) std::cout << "Debug: Coords lower than 0" << std::endl;

	_sdlRect->x += x;
	_sdlRect->y += y;
}

std::array<int, 2> Engine::Surface::GetPosition( ) {
	return std::array<int, 2> { _sdlRect->x, _sdlRect->y };
}

//void Engine::Surface::FillSurface(Engine::Images::ColorRGB* color) {
	//SDL_FillRect(_sdlSurface, NULL, SDL_MapRGB(_sdlSurface->format, color->r, color->g, color->b));
//}

//void Engine::Surface::SurfaceBlit( ) { }

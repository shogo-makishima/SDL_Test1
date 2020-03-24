#include "Window.h"
#include "Surface.h"
#include "Engine.h"

using Engine::Window;
using Engine::Vector2;

Window::Window( ) { 
	_sdlWindow = NULL;
}

void Window::SetSize(Vector2* size) {
	sizeX = size->GetX( );
	sizeY = size->GetY( );
}

void Window::Initialise() {
	_sdlWindow = SDL_CreateWindow("Main не резиновый", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, sizeX, sizeY, SDL_WINDOW_OPENGL);
	_surfaceWindow = new Engine::Surface(_sdlWindow);
}

// Engine::Surface* Engine::Window::GetSurface( ) { return _surfaceWindow; }
// SDL_Window* Engine::Window::GetSdlWindow( ) { return _sdlWindow; }

SDL_Window* Engine::Window::GetSdlWindow( ) { return _sdlWindow; }

void Window::UpdateWindow( ) {
	SDL_UpdateWindowSurface(_sdlWindow);
}


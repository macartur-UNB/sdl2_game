#include <iostream>
#include "window.h"

#include <SDL2/SDL.h>

using namespace std;


int main(int argc, char** argv){
	Window *window;

	window = new Window(SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, 640,480, "New Window",SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN | SDL_WINDOW_SHOWN  );

	if( window->init() < 0){
		cout << "NOT window";
	}

	window->fill_rect(0x00,0x00,0x00);
	window->update_surface();
	window->delay(5000);


	return 0;
}


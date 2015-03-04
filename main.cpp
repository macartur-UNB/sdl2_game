#include <iostream>
#include "window.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

using namespace std;



void init(Window* &window){
	window = new Window(SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, 640,480, "New Window",SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN | SDL_WINDOW_SHOWN  );

	if( window->init() < 0){
		cout << "NOT window";
	}
}



int main(int argc, char** argv){
    SDL_Surface *image; 
    Window *window;

    init(window);
    
    bool quit = false;//main loop

    SDL_Event e;
    image = IMG_Load ("images/lena.jpg");

    if(!image){
        cout << "Can't load the image"<<endl;
    }

    while(!quit){
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT )  quit = true;    // EVENT to QUIT 
        }
	    window->fill_rect(0x00,0x00,0x00); //DRAW BACKGROUND
        SDL_Rect rcDest = {640/2, 480/2, 0, 0 };
        SDL_BlitSurface(image,NULL,window->getSurface(), &rcDest ); //DRAW IMAGE
	    window->update_surface();  
    }


	return 0;
}


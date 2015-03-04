#include <iostream>
#include "window.h"
#include <vector>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

using namespace std;


bool quit = false;//main loop
int DEFAULT=0;
int UP   = 1;
int DOWN = 2;
int LEFT = 3;
int RIGHT= 4;

string IMAGE_PATH = "images/";

void init(Window* &window){
	window = new Window(SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, 640,480, "New Window",SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN | SDL_WINDOW_SHOWN  );

	if( window->init() < 0){
		cout << "NOT window";
	}
}

void handle_event(int &current){
        SDL_Event e;
        while( SDL_PollEvent( &e ) != 0 ) {
            if( e.type == SDL_QUIT )  quit = true;// EVENT to QUIT 
            if(e.type == SDL_KEYDOWN)    
            {
                switch(e.key.keysym.sym){
                    case SDLK_UP:
                      current = UP;break;
                    case SDLK_DOWN:
                      current = DOWN;break;
                    case SDLK_LEFT:
                      current = LEFT;break;
                    case SDLK_RIGHT:
                      current = RIGHT;break;
                    default:
                      current = DEFAULT;
                }
            }
        }
}


void draw_surfaces(Window* &window,int &currentSurface,vector<string> & images, SDL_Rect &rcDest){
        SDL_Surface *image_surface; 
        string image;

	    window->fill_rect(0xFF,0xFF,0xFF); //DRAW BACKGROUND
        image = IMAGE_PATH+images[currentSurface];
        image_surface = IMG_Load (  image.c_str());
        if(!image_surface){
            cout << "Can't load the image"<<endl;
        }
        SDL_BlitSurface(image_surface,NULL,window->getSurface(), &rcDest); 
	    window->update_surface();  
}



int main(int argc, char** argv){
    Window *window;
    init(window);

    int currentSurface=DEFAULT;
    vector<string> images;
    images.push_back("default.png");
    images.push_back("up.png");
    images.push_back("down.png");
    images.push_back("left.png");
    images.push_back("right.png");
    SDL_Rect rcDest = {640/3, 480/3, 0, 0 };

    while(!quit){
        handle_event(currentSurface);
        draw_surfaces(window,currentSurface,images,rcDest); 
    }

	return 0;
}


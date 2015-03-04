#include "window.h"

Window::Window(int posx,int posy,int width,int height,std::string name ,unsigned int flag){
    this->posx = posx;
    this->posy = posy;
    this->width = width;
    this->name = name;
    this->height = height;
    this->flag = flag;
}

int
Window::init( unsigned int flags){
    if(SDL_Init(flags)){
        std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << "\n";
    }

    window = SDL_CreateWindow(this->name.c_str() ,this->posx,this->posy,this->width,this->height,this->flag);

    if (window == NULL) {
        std::cout<< "Can't create the window: " << SDL_GetError() << "\n" ;
        return -1;
    }
    screenSurface = SDL_GetWindowSurface( this->window );
    return 0;
}

void 
Window::fill_rect(int red, int green , int blue){
    SDL_FillRect( this->screenSurface, NULL, SDL_MapRGB( this->screenSurface->format,red,green,blue));
}

void
Window::update_surface(){
     SDL_UpdateWindowSurface( this->window );   
}

Window::~Window(){
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}

void 
Window::delay(int value){
    SDL_Delay(value);
}

SDL_Surface*
Window::getSurface(){
	return this->screenSurface;
}

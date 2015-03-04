
#include <SDL2/SDL.h>
#include <iostream>

int main(int argc , char* argv[]){
    
    SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("An a sdl window",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,640,480,SDL_WINDOW_RESIZABLE);

    if (window == NULL) {
        std::cout<< "Can't create the window %s\n" << SDL_GetError();
        return -1;
    }

    SDL_Delay(5000);
                                
    SDL_DestroyWindow(window);

    SDL_Quit();
    return 0;    
}

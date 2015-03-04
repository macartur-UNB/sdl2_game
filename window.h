#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include <iostream>
#include <string>

class Window {
    private:
        int    posx;
        int    posy;
        int    width;
        int    height;
        unsigned int  flag;
        
        std::string  name;
        SDL_Surface* screenSurface = NULL;
        SDL_Window *window = NULL;
    public:
        Window(int posx,int posy,int width,int height,std::string name, unsigned int flag);    
        ~Window();
        int init();
		void fill_rect(int red, int green , int blue);
		void update_surface();
        void delay(int value);
};

#endif


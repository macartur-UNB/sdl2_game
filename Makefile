
RUNNABLE_FILE= main

CFLAGS = g++ -Wall -pedantic -ansi 
SDL_FLAGS= -lSDL2 -lSDL2_image 
SOURCE = window.cpp main.cpp

all:
	$(CFLAGS)  $(SDL_FLAGS) $(SOURCE) -o $(RUNNABLE_FILE)

clean:
	rm ${RUNNABLE_FILE} 



RUNNABLE_FILE= main

CFLAGS = g++ -Wall -pedantic -ansi 
SDL_FLAGS= -lSDL2 
SOURCE = window.cpp main.cpp




all:
	$(CFLAGS)  $(SDL_FLAGS) $(SOURCE) -o $(RUNNABLE_FILE)

clean:
	rm ${RUNNABLE_FILE} 


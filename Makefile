
RUNNABLE_FILE= main

CFLAGS = g++ -Wall -pedantic -ansi 
SDL_FLAGS= -lSDL2 -lSDL2_image 
SOURCE = window.cpp main.cpp

all:
	$(CFLAGS)  $(SDL_FLAGS) $(SOURCE) -o $(RUNNABLE_FILE)


edit:
	vim *.cpp *.h -p

clean:
	rm ${RUNNABLE_FILE} 


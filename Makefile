
RUNNABLE_FILE= main

CFLAGS = g++ -Wall -pedantic -ansi 
SDL_FLAGS= -lSDL2 -lSDL2_image -lSDL2_mixer 
SOURCE = window.cpp main.cpp vector2D.cpp dot.cpp

all:
	$(CFLAGS)  $(SDL_FLAGS) $(SOURCE) -o $(RUNNABLE_FILE)


edit:
	vim *.cpp *.h -p

clean:
	rm ${RUNNABLE_FILE} 


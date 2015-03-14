#ifndef DOT_H
#define DOT_H

#include <iostream>
#include <string>
using namespace std;

class Dot {
	friend ostream& operator<<(ostream &out, const Dot &dot);
	public:
		Dot(float x, float y);
		float getX() const ;
		void setX(float x);
		float getY() const ;
		void setY(float y);
	private:
		int x;
		int y;
};

#endif

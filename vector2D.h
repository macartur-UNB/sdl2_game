#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <string>
using namespace std;

#include "dot.h"

using namespace std;

class Vector2D : public Dot {
	friend ostream& operator<<(ostream &out, const Vector2D &vector);
	public:
		Vector2D(float x ,float y);
		float module();
		Vector2D inverso();
		Vector2D operator+(const float x); 	
		Vector2D operator-(const float x); 	
		Vector2D operator+(const Vector2D vector); 	
		Vector2D operator-(const Vector2D vector); 	
	private:
};

#endif

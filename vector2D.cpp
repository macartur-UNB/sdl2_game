#include "vector2D.h"
#include <cmath>

ostream& operator<<(ostream &out, const Vector2D &vector){
    out << "Vector2D("<<vector.getX()<<","<<vector.getY() <<")";
    return out;
}
Vector2D::Vector2D(float x,float y ) : Dot(x,y) { 
}

float 
Vector2D::module(){
	return sqrt(this->getX()*this->getX() + this->getY()*this->getY());
}
		
Vector2D 
Vector2D::operator+(const float x){
	return Vector2D(this->getX()+x,this->getY()+x);
}

Vector2D 
Vector2D::operator-(const float x){
	return Vector2D(this->getX()-x,this->getY()-x);
}

Vector2D 
Vector2D::operator+(const Vector2D vector){
	return Vector2D(this->getX()+vector.getX(),this->getY()+vector.getY());
}

Vector2D 
Vector2D::operator-(const Vector2D vector){
	return Vector2D(this->getX()-vector.getX(),this->getY()-vector.getY());
}
		
Vector2D 
Vector2D::inverso(){
	return Vector2D(this->getX()*-1,this->getY()*-1);
}

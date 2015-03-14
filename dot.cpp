#include "dot.h"

ostream& operator<<(ostream &out, const Dot &dot){
    out << "Dot"<<dot.getX()<<","<<dot.getY() <<")";
    return out;
}

Dot::Dot(float x, float y){
  this->x = x;
  this->y = y;
}

float
Dot::getX() const {
  return this->x;
}

void
Dot::setX(float x){
  this->x = x;
}

float
Dot::getY() const {
  return this->y;
}

void
Dot::setY(float y){
  this->y = y;
}

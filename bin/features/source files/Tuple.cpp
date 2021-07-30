#include "../header files/Tuples.h"

using namespace Features;

Tuple::Tuple() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->type = 1;      
}

Tuple::Tuple(float x, float y, float z, int type) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->type = type;  
}

bool Tuple::check_type() {
    return this->type;
}

Point::Point() {
    this->tuple = Tuple();
}

Point::Point(float x, float y, float z) {
    this->tuple = Tuple(x, y, z, 1);
}

Vector::Vector() {
    this->tuple = Tuple(0,0,0,1);
}

Vector::Vector(float x, float y, float z) {
    this->tuple = Tuple(x, y, z, 0);
};
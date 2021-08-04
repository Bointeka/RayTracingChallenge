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
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->type = 1;
}

Point::Point(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->type = 1;
}

Vector::Vector() {
    this->x = 1;
    this->y = 1;
    this->z = 1;
    this->type = 0;
}

Vector::Vector(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->type = 0;   
};
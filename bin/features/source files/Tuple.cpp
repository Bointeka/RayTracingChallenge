#include "../header files/Tuples.h"
#include <stdlib.h>
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

//Returns the type of the tuple
    //Either a vector or a point
bool Tuple::check_type() {
    return this->type;
}

//Checks whether two tuples are equal
bool Tuple::operator==(const Tuple &vec2) {
    if (is_Equal(this->x, vec2.x) == 0) 
        return false;
    else if (is_Equal(this->y, vec2.y) == 0)
        return false;
    else if (is_Equal(this->z, vec2.z) == 0)
        return false;
    else if (this->type != vec2.type)
        return false;
    else
        return true;
}

//Checks whether two tuples are not equal to each other
bool Tuple::operator!=(const Tuple &vec2) {
    if (is_Equal(this->x, vec2.x) == 0) 
        return true;
    else if (is_Equal(this->y, vec2.y) == 0)
        return true;
    else if (is_Equal(this->z, vec2.z) == 0)
        return true;
    else if (this->type != vec2.type)
        return true;
    else
        return false;
}

//Checks whether two floats are equal
int Tuple::is_Equal(float x, float y) {
    if (abs(x - y) <= 0.000000005)
        return 1;
    return 0;
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
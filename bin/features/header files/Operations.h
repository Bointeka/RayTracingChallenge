#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <cmath>
#include <iostream>
#include "./Tuples.h"


using namespace Features;
using namespace std;
//Collection of static functions used to manipulate Vectors and Points

//Addition
Point tuple_sum(Vector vector, Point point);
Point tuple_sum(Point point, Vector vector);
Vector tuple_sum(Vector vector1, Vector vector2);
int tuple_sum(Point point1, Point point2);

//Subtration
Vector tuple_sub(Vector vector1, Vector vector2);
Point tuple_sub(Point point, Vector vector);
Vector tuple_sub(Point point1, Point point2);
int tuple_sub(Vector vector, Point point);

Vector negate_tup(Vector tup1);
Vector scalar(Vector tup1, float scalar);
float magnitude(Vector tup1);
Vector normalize(Vector tup1);
float dot(Vector tup1, Vector tup2);
Vector cross(Vector tup1, Vector tup2);
#endif
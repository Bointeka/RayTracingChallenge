#include "../header files/Operations.h"
//Addition
Point tuple_sum(Vector vector, Point point) {
    return Point(point.x + vector.x, point.y + vector.y, point.z + vector.z);
}

Point tuple_sum(Point point, Vector vector) {
    return Point(point.x + vector.x, point.y + vector.y, point.z + vector.z);
}

Vector tuple_sum(Vector vector1, Vector vector2) {
    return Vector(vector1.x + vector2.x, vector1.y + vector2.y, vector1.z + vector2.z);
}

int tuple_sum(Point point1, Point point2) {
    cerr << "Cannot add point to another point" << endl;
    return 0;
}

//Subtration
Vector tuple_sub(Vector vector1, Vector vector2) {
    return Vector(vector1.x - vector2.x, vector1.y - vector2.y, vector1.z - vector2.z);
}

Point tuple_sub(Point point, Vector vector) {
    return Point(point.x - vector.x, point.y - vector.y, point.z - vector.z);
}

Vector tuple_sub(Point point1, Point point2) {
    return Vector(point1.x - point2.x, point1.y - point2.y, point1.z - point2.z);
}

int tuple_sub(Vector vector, Point point) {
    cerr << "Cannot subtract vector from point" << endl;
    return 0;
}

Vector negate_tup(Vector tup1) {
    return Vector(-tup1.x, -tup1.y, -tup1.z);
}
Vector scalar(Vector tup1, float scalar) {
    return Vector(tup1.x * scalar, tup1.y * scalar, tup1.z * scalar);
}
float magnitude(Vector tup1) {
    return sqrt(pow(tup1.x,2) + pow(tup1.y,2) + pow(tup1.z,2));
}
Vector normalize(Vector tup1) {
    float mag = magnitude(tup1);
    return Vector(tup1.x / mag, tup1.y / mag, tup1.z / mag);
}
float dot(Vector tup1, Vector tup2) {
    return (tup1.x * tup2.x) + (tup1.y * tup2.y) +(tup1.z * tup2.z) + (tup1.type * tup2.type);
}
Vector cross(Vector tup1, Vector tup2) {
    return Vector(  (tup1.y * tup2.z) - (tup1.z * tup2.y),
                    (tup1.z * tup2.x) - (tup1.x * tup2.z),
                    (tup1.x * tup2.y) - (tup1.y * tup2.x));
}
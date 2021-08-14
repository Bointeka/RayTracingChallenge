#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <cmath>
#include "./Tuples.h"

using namespace Features;
//Collection of static functions used to manipulate Vectors and Points
Tuple* tuple_sum(Tuple tup1, Tuple tup2){
    int type = tup1.type + tup2.type;
    if (type == 0) {
        return new Vector(tup1.x + tup2.x, tup1.y + tup2.y, tup1.z + tup2.z);
    } else if (type == 1) {
        return new Point(tup1.x + tup2.x, tup1.y + tup2.y, tup1.z + tup2.z);
    } else {
        return nullptr;
    }
}
Tuple* tuple_sub(Tuple tup1, Tuple tup2){
    int type = tup1.type - tup2.type;
    if (type == 0) {
        return new Vector(tup1.x - tup2.x, tup1.y - tup2.y, tup1.z - tup2.z);
    } else if (type == 1) {
        return new Point(tup1.x - tup2.x, tup1.y - tup2.y, tup1.z - tup2.z);
    } else {
        return nullptr;
    }
}
Tuple negate_tup(Tuple tup1) {
    return Vector(-tup1.x, -tup1.y, -tup1.z);
}
Tuple scalar(Tuple tup1, float scalar) {
    return Vector(tup1.x * scalar, tup1.y * scalar, tup1.z * scalar);
}
float magnitude(Tuple tup1) {
    return sqrt(pow(tup1.x,2) + pow(tup1.y,2) + pow(tup1.z,2));
}
Tuple normalize(Tuple tup1) {
    float mag = magnitude(tup1);
    return Vector(tup1.x / mag, tup1.y / mag, tup1.z / mag);
}
float dot(Tuple tup1, Tuple tup2) {
    return (tup1.x * tup2.x) + (tup1.y * tup2.y) +(tup1.z * tup2.z) + (tup1.type * tup2.type);
}
Tuple cross(Tuple tup1, Tuple tup2) {
    return Vector(  (tup1.y * tup2.z) - (tup1.z * tup2.y),
                    (tup1.z * tup2.x) - (tup1.x * tup2.z),
                    (tup1.x * tup2.y) - (tup1.y * tup2.x));
}
#endif
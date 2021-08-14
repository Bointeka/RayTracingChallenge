#include "../features/header files/Tuples.h"
#include "../features/header files/Operations.h"
#include <cassert>
#include <iostream>

using namespace Features;
using namespace std;


void TEST_TUPLE_ADD() {
    cout << "TESTING TUPLE ADD TEST" << endl;    
    Vector vec1 = Vector();
    Vector vec2 = Vector();
    Point point1 = Point();
    Tuple *sum = tuple_sum(vec1, vec2);
    assert(*sum == Vector(2,2,2));
    delete sum;
    sum = tuple_sum(vec1, point1);
    assert(*sum == Point(1,1,1));
    delete sum;   
    sum = tuple_sum(point1, point1);
    assert(sum == nullptr);    
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_SUBTRACT() {
    cout << "TESTING TUPLE SUBTRACT TEST" << endl;    
    Vector vec1 = Vector();
    Vector vec2 = Vector();
    Point point1 = Point();
    Point point2 = Point(1,1,1);
    Tuple *sub = tuple_sub(vec1, vec2);
    assert(*sub == Vector(0,0,0));
    delete sub;
    sub = tuple_sub(point1, vec1);
    assert(*sub == Point(0,0,0));
    delete sub;
    sub = tuple_sub(point1, point2);
    assert(*sub == Vector(-1,-1,-1));
    delete sub;
    sub = tuple_sub(vec1, point1);
    assert(sub == nullptr);
    cout << "TEST PASSED" << endl;   
}

void TEST_TUPLE_NEGATE() {
    cout << "TESTING TUPLE NEGATE" << endl;
    Vector vec1 = Vector();
    assert(negate(vec1) == Vector(-1,-1,-1));
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_SCALAR() {
    cout << "TESTING TUPLE SCALAR" << endl;
    Vector vec1 = Vector();
    assert(scalar(vec1, 2) == Vector(2,2,2));
    assert(scalar(vec1, 0.5) == Vector(0.5, 0.5, 0.5));
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_MAGNITUDE() {
    cout << "TESTING TUPLE MAGNITUDE" << endl;
    Vector vec1 = Vector(2,2,1);
    assert(magnitude(vec1) == 3);
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_NORMALIZATION() {
    cout << "TESTING TUPLE NORMALIZATION" << endl;
    Vector vec1 = Vector(1,2,1);
    float mag = magnitude(vec1);
    assert(normalize(vec1) == Vector(1 / mag, 2 / mag, 3 / mag));
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_DOT() {
    cout << "TESTING TUPLE DOT" << endl;
    Vector vec1 = Vector(1,2,3);
    Vector vec2 = Vector(2,3,4);
    assert(dot(vec1,vec2) == 20);
    cout << "TEST PASSED" << endl;
}

void TEST_TUPLE_CROSS() {
    cout << "TESTING TUPLE CROSS" << endl;
    Vector vec1 = Vector(1,2,3);
    Vector vec2 = Vector(2,3,4);
    assert(cross(vec1, vec2) == Vector(-1, 2, -1));
    assert(cross(vec2, vec1) == Vector(1, -2, 1));
    cout << "TEST PASSED" << endl;
}

int main() {
    TEST_TUPLE_ADD();
    TEST_TUPLE_SUBTRACT();
    TEST_TUPLE_NEGATE();
    TEST_TUPLE_MAGNITUDE();
    TEST_TUPLE_SCALAR();
    TEST_TUPLE_NORMALIZATION();
    TEST_TUPLE_DOT();
    TEST_TUPLE_CROSS();
    return 1;
}
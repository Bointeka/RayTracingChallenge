#include "../features/header files/Tuples.h"
#include <cassert>
#include <iostream>

using namespace Features;
using namespace std;

//Tests the creation of vector or point from a point

void TEST_TUPLE_VECTOR() {
    cout << "Testing TEST_TUPLE_VECTOR" << endl;
    Tuple test_tuple = Tuple(4.3, -4.2, 3.1, 0);
    assert(test_tuple.is_Equal(test_tuple.x, 4.3));
    assert(test_tuple.is_Equal(test_tuple.y, -4.2));
    assert(test_tuple.is_Equal(test_tuple.z, 3.1));
    assert(test_tuple.check_type() == 0);
}

void TEST_TUPLE_POINT() {
    cout << "Testing TEST_TUPLE_POINT" << endl;
    Tuple test_tuple = Tuple(4.3, -4.2, 3.1, 1);
    assert(test_tuple.is_Equal(test_tuple.x, 4.3));
    assert(test_tuple.is_Equal(test_tuple.y, -4.2));
    assert(test_tuple.is_Equal(test_tuple.z, 3.1));
    assert(test_tuple.check_type() == 1);
    cout << "TEST_TUPLE_POINT passed" << endl;
}

void TEST_POINT() {
    cout << "Testing TEST_POINT" << endl;
    Point test_tup = Point(4.3, -4.2, 3.1);
    assert(test_tup.type == 1);
}

void TEST_VEC() {
    cout << "Testing TEST_VEC" << endl;
    Vector test_tup = Vector(4.3, -4.2, 3.1);
    assert(test_tup.type == 0);
    cout << "TEST_VEC passed" << endl;
}

int main() {
    TEST_TUPLE_VECTOR();
    TEST_TUPLE_POINT();
    TEST_POINT();
    TEST_VEC();
    return 1;
} 
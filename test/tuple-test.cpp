#include features/tuples.h
#include <cassert>

//Tests the creation of vector or point from a point
void main() {
    TEST_TUPLE_VECTOR();
    TEST_TUPLE_POINT();
    TEST_POINT();
    TEST_VEC();
} 

void TEST_TUPLE_VECTOR() {
    Tuple test_tup = tuple(4.3, -4.2, 3.1, 1.0);
    assert(test_tuple.x == 4.3);
    assert(test_tuple.y == -4.2);
    assert(test_tuple.z == 3.1);
    assert(test_tuple.w == 1.0);
    assert(test_tuple.is_point() == false);
    assert(test_tuple.is_vector() == true);
}

void TEST_TUPLE_POINT() {
    Tuple test_tup = tuple(4.3, -4.2, 3.1, 0);
    assert(test_tuple.x == 4.3);
    assert(test_tuple.y == -4.2);
    assert(test_tuple.z == 3.1);
    assert(test_tuple.w == 0);
    assert(test_tuple.is_point() == true);
    assert(test_tuple.is_vector() == false);
}

void TEST_POINT() {
    Tuple test_tup = point(4.3, -4.2, 3.1);
    assert(test_tup.is_point() == true);
    assert(test_tup.is_vector() == false);
}

void TEST_VEC() {
    Tuple test_tup = vector(4.3, -4.2, 3.1);
    assert(test_tup.is_point() == false);
    assert(test_tup.is_vector() == true);

}
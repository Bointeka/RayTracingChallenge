#ifndef TUPLES_H
#define TUPLES_H
#include <cmath>

namespace Features {

    class Tuple {
        public:
            float x;
            float y;
            float z;
            int type;

            Tuple(); 
            Tuple(float x, float y, float z, int type);
            bool check_type();
            bool operator==(const Tuple &vec2);
            bool operator!=(const Tuple &vec2);
            int is_Equal(float x, float y);
    };

    class Point : public Tuple{
        public:
            Point();
            Point(float x, float y, float z);
    };

    class Vector : public Tuple {
        public:
            Vector();
            Vector(float x, float y, float z);
    };
}
#endif
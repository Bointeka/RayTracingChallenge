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
        
    };

    class Point : public Tuple{
        public:
        Tuple tuple;
            Point();
            Point(float x, float y, float z);
    };

    class Vector : public Tuple {
        public:
            Vector();
            Vector(float x, float y, float z);
    };
}
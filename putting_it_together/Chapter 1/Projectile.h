#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "../../bin/features/header files/Tuples.h"
#include "../../bin/features/header files/Operations.h"
#include <iostream>

using namespace Features;
using namespace std;
namespace Chapter1 {
    class Projectile {
        public:
            Point position;
            Vector velocity;
            Projectile() {
                this->position = Point();
                this->velocity = Vector();
            }
            Projectile(Point position, Vector velocity){
                this->position = position;
                this->velocity = velocity;
            }
            friend ostream& operator<<(ostream& os, const Projectile& proj) {
                return os << "x: " << proj.position.x << "y: " << proj.position.y << endl;
            }
    };

    class Environment {
        public:
            Vector gravity;
            Vector wind;
            Environment(Vector gravity, Vector wind) {
                this->gravity = gravity;
                this->wind = wind;
            }
    };

    Projectile tick(Projectile proj, Environment environment);
  
}

#endif
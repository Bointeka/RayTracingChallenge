#include "./Projectile.h"
#include "../../bin/features/header files/Tuples.h"
#include "../../bin/features/header files/Operations.h"
#include <iostream>

using namespace Features;
using namespace Chapter1;
using namespace std;

int main() {
    int count = 1;
    Projectile proj = Projectile(Point(0,1,0), normalize(Vector(1,1,0)));
    cout << "Position" << proj << " | tick:" << count++ << endl;
    Environment environment = Environment(Vector(0, -0.1, 0), Vector(-0.01, 0, 0));
    do {
    proj = tick(proj, environment);
    cout << "Position" << proj << " | tick:" << count << endl;
    count += 1;
    } while (proj.position.y > 0);
    return 1;
}
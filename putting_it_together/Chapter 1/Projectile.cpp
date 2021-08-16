#include "../../bin/features/header files/Operations.h"
#include ".\Projectile.h"
using namespace Chapter1;
Projectile Chapter1::tick(Projectile proj, Environment env) {
    Point position = tuple_sum(proj.position, proj.velocity);
    Vector velocity = tuple_sum(tuple_sum(env.gravity, env.wind), proj.velocity);
    return Projectile(position, velocity);
} 
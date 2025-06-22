#include "Vector2.cpp"
#include "Vector3.cpp"
#include "Vector4.cpp"

//I'm gonna put some physichs stuff here for now
void move2d(Vector2* p, Vector2* v, Vector2 a, float dt){
    if (p && v) {
        *p = *p + *v * dt;
        *v = *v + a * dt;
    }
}
void move3d(Vector3* p, Vector3* v, Vector3 a, float dt) {
    if (p && v) {
        *p = *p + *v * dt;
        *v = *v + a * dt;
    }
}
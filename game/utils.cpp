#include "Vector2.cpp"
#include "Vector3.cpp"
#include "Vector4.cpp"

//I'm gonna put some physichs stuff here for now
void move2d(float* x, float* y, Vector2* v, Vector2 a, float dt){
    if (x && y && v) {
        Vector2 p = Vector2(*x, *y);
        *v = *v + a * dt;
        p = p + *v * dt;
        *x = p.x;
        *y = p.y;
    }
}
void move3d(Vector3* p, Vector3* v, Vector3 a, float dt) {
    if (p && v) {
        *v = *v + a * dt;
        *p = *p + *v * dt;
    }
}
bool aabb_vs_aabb(Vector2 p1, float hs1x, float hs1y, Vector2 p2, float hs2x, float hs2y) { //returns true if the positions +/- the half size overlap
    return p1.x + hs1x > p2.x - hs2x &&
        p1.x - hs1x < p2.x + hs2x &&
        p1.y + hs1y > p2.y - hs2y &&
        p1.y - hs1y < p2.y + hs2y;
}
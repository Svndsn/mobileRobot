#include "robot.h"
#include <cmath>

robot::robot(float x, float y): point(x,y)
{
    
}

robot::robot(float x, float y, float deg): point(x,y), facing(deg)
{
    
}

void robot::move(point a) {
    setX(a.getX());
    setY(a.getY());
}

void robot::turn(point a) {
    float dx = a.getX() - getX();
    float dy = a.getY() - getY();
    facing = atan2(dy, dx) * 180 / M_PI;
    if (facing < 0) {
        facing += 360;
    }
}

void robot::turn(float deg) {
    facing += deg;
    if (facing >= 360) {
        facing -= 360;
    }
}

void robot::moveRobot(float x, float y) {
    point target(x, y);
    turn(target);
    move(target);
}

void robot::moveRobot(point a) {
    turn(a);
    move(a);
}
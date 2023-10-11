#include "point.h"
#include <cmath>

point::point(float x, float y):x(x), y(y){}

float point::getX() {
    return x;
}

float point::getY() {
    return y;
}

float point::distanceBetweenPoints(point b) {
    return sqrt(pow((b.getX()-x),2)+((b.getY()-y),2));
}
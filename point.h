#pragma once

class point
{
private:
    float x, y;
public:
    point(float _x, float _y);
    ~point();
    float distanceBetweenPoints(point b); // Calculates sortest distance between two points
    float getX(); // returns x
    float getY(); // returns y
};
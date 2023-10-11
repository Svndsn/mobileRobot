#pragma once

class point
{
private:
    float x, y;
public:
    point(float _x, float _y);
    ~point();
    float distanceBetweenPoints(point b); // Calculates sortest distance between two points
    //Getters and setters
    float getX();
    float getY();
    void setX(float x);
    void setY(float y);
};
#pragma once

class point
{
private:
    float x, y;
    void setX(float);
    void setY(float);
public:
    point(float _x, float _y);
    ~point();
    float distanceBetweenPoints(point b); // Calculates sortest distance between two points
    //Getters
    float getX();
    float getY();


    friend class robot; //makes the robot class able to set and change X and Y without the point being able to do that
};
#pragma once
#include "point.h"

class robot : public point
{
private:
    /* data */
public:
    robot(/* args */);
    ~robot();
    void moveRobot(float x, float y); //moves the robot in the x and y direction
    void moveRobot(point a); //moves the robot ontop of point a
};
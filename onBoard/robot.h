#pragma once
#include "point.h"

class robot : public point //Basically a point that moves and is facing somewhere
{
private:
    float facing = 0; //direction robot is facing from 0-360 deg
    void move(point a); //moves the robot ontop of point a
    void turn(float deg); //turns deg in positive direction of rotation
    void turn(point a); //turns towards point a
public:
    robot(float x, float y);
    robot(float x, float y, float deg);
    robot();
    ~robot();
    void moveRobot(float x, float y); //Moves and turns the robot
    void moveRobot(point a); //moves and turns the robot towards point a
};
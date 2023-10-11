#pragma once
#include "point.h"
#include "robot.h"
#include <vector>

class coordinateSystem
{
private:
    std::vector<point> listOfPoints;
    void clearList(); // Clears listOfPoints
    bool isListEmpty(); // Checks if listOfPoints are empty
    robot robot;
public:
    coordinateSystem(/* args */);
    ~coordinateSystem();
    void addPoint(point p); // Adds point to listOfPoints
    void removeFirstPoint(); // Deletes first point in listOfPoints
    point readNextPoint(); // Returns next point in listOfPoints
};
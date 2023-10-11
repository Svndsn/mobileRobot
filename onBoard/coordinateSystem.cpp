#include "coordinateSystem.h"

coordinateSystem::coordinateSystem() {}

void coordinateSystem::addPoint(point p) {
    listOfPoints.push_back(p);
}

void coordinateSystem::clearList() {
    listOfPoints.clear();
}

point coordinateSystem::readNextPoint() {
    return listOfPoints.at(0);
}

void coordinateSystem::removeFirstPoint() {
    listOfPoints.erase(listOfPoints.begin());
}

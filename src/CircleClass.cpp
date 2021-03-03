/******************************************************************************
 * File: CircleClass.cpp
 * Description: Circle methods
 * Created: 18 Feb 2021
 * Author: Xitowzys
 * Email: xitowzys@gmail.com
 
 ******************************************************************************/

#include "CircleClass.hpp"

CircleClass::CircleClass(double x, double y, double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
}

CircleClass::~CircleClass(){}

double CircleClass::distanceFromCenterToOrigin()
{
    return sqrt((x - 0) * (x - 0) + (y - 0) * (y - 0));
}

double CircleClass::distanceFromCircleToOtherCircle(CircleClass &Circle)
{
    return sqrt((x - Circle.x) * (x - Circle.x) + (y - Circle.y) * (y - Circle.y));
}

double CircleClass::distanceFromCircleToXAxis()
{
    return abs(y) - radius > 0 ? abs(y) - radius : 0;
}

double CircleClass::distanceFromCircleToOrigin()
{
    return distanceFromCenterToOrigin() - radius > 0 ? distanceFromCenterToOrigin() - radius : 0;
}

bool CircleClass::isInscribedCircles(CircleClass &Circle)
{
    return radius > Circle.radius;
}

bool CircleClass::isIntersectionCircles(CircleClass &Circle)
{
    double distanceBetween = distanceFromCircleToOtherCircle(Circle);
    
    double minorR = radius < Circle.radius ? radius : Circle.radius;
    double majorR = radius > Circle.radius ? radius : Circle.radius;
    
    
    if (distanceBetween < minorR + majorR || distanceBetween == minorR + majorR || distanceBetween + minorR >= majorR)
    {
        return true;
    }
    else
    {
        return false;
    }
}

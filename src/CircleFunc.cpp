/******************************************************************************
 * File: CircleFunc.cpp
 * Description: Circle functions
 * Created: 18 Feb 2021
 * Author: Xitowzys
 * Email: xitowzys@gmail.com
 
 ******************************************************************************/

#include "CircleFunc.hpp"

double distanceFromCenterToOrigin(CircleStruct *Circle)
{
    return sqrt((Circle->x - 0) * (Circle->x - 0) + (Circle->y - 0) * (Circle->y - 0));
}

double distanceFromCircleToOtherCircle(CircleStruct *Circle, CircleStruct *Circle2)
{
    return sqrt((Circle->x - Circle2->x) * (Circle->x - Circle2->x) + (Circle->y - Circle2->y) * (Circle->y - Circle2->y));
}

double distanceFromCircleToXAxis(CircleStruct *Circle)
{
    return abs(Circle->y) - Circle->radius > 0 ? abs(Circle->y) - Circle->radius : 0;
}

double distanceFromCircleToOrigin(CircleStruct *Circle)
{
    return distanceFromCenterToOrigin(Circle) - Circle->radius > 0 ? distanceFromCenterToOrigin(Circle) - Circle->radius : 0;
}

bool isInscribedCircles(CircleStruct *Circle, CircleStruct *Circle2)
{
    return Circle2->radius > Circle->radius;
}

bool isIntersectionCircles(CircleStruct *Circle, CircleStruct *Circle2)
{
    double distanceBetween = distanceFromCircleToOtherCircle(Circle2, Circle);
    
    double minorR = Circle->radius < Circle2->radius ? Circle->radius : Circle2->radius;
    double majorR = Circle->radius > Circle2->radius ? Circle->radius : Circle2->radius;
    
    
    if (distanceBetween < minorR + majorR || distanceBetween == minorR + majorR || distanceBetween + minorR >= majorR)
    {
        return true;
    }
    else
    {
        return false;
    }
}

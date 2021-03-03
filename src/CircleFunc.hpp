/******************************************************************************
 * File: CircleFunc.hpp
 * Description: Circle functions
 * Created: 18 Feb 2021
 * Author: Xitowzys
 * Email: xitowzys@gmail.com
 
 ******************************************************************************/

#ifndef CircleFunc_hpp
#define CircleFunc_hpp

#include <iostream>

struct CircleStruct
{
    double x;
    double y;
    double radius;
};

// Нахождения расстояния от центра окружности до начала координат
double distanceFromCenterToOrigin(CircleStruct *Circle);

// Нахождение расстояния между центрами двух окружности
double distanceFromCircleToOtherCircle(CircleStruct *Circle, CircleStruct *Circle2);

// Нахождение расстояния от окружности (не от центра) до оси X
double distanceFromCircleToXAxis(CircleStruct *Circle);

// Нахождение расстояния от окружности (не от центра) до начала координат
double distanceFromCircleToOrigin(CircleStruct *Circle);

// Проверки может ли быть окружность один вписана в окружность два
bool isInscribedCircles(CircleStruct *Circle, CircleStruct *Circle2);

// Проверки пересекаются ли две окружности
bool isIntersectionCircles(CircleStruct *Circle, CircleStruct *Circle2);


#endif /* CircleFunc_hpp */

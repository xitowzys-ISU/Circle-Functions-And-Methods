/******************************************************************************
 * File: CircleClass.hpp
 * Description: Circle methods
 * Created: 18 Feb 2021
 * Author: Xitowzys
 * Email: xitowzys@gmail.com
 
 ******************************************************************************/

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include <iostream>

class CircleClass
{
private:
    double x;
    double y;
    double radius;
    
public:
    CircleClass(double x, double y, double radius);
    ~CircleClass();
    
    // Нахождения расстояния от центра окружности до начала координат
    double distanceFromCenterToOrigin();
    
    // Нахождение расстояния между центрами двух окружности
    double distanceFromCircleToOtherCircle(CircleClass &Circle);
    
    // Нахождение расстояния от окружности (не от центра) до оси X
    double distanceFromCircleToXAxis();
    
    // Нахождение расстояния от окружности (не от центра) до начала координат
    double distanceFromCircleToOrigin();
    
    // Проверки может ли быть окружность один вписана в окружность два
    bool isInscribedCircles(CircleClass &Circle);
    
    // Проверки пересекаются ли две окружности
    bool isIntersectionCircles(CircleClass &Circle);
};

#endif /* CircleClass_hpp */

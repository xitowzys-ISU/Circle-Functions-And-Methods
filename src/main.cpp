#include <iostream>
#include "CircleFunc.hpp"
#include "CircleClass.hpp"

int main() {
    
    using namespace std;
    
    CircleStruct circle1 = {2, 6, 4};
    CircleStruct circle2 = {6, 3, 1};
    
    cout << "-------------------------------------------------------------" << "\n";
    cout << "\t\t\t\t\t\tФункции\t\t\t\t\t\t" << "\n";
    cout << "-------------------------------------------------------------" << "\n";
    
    cout << "Расстояния от центра окружности до начала координат: " << distanceFromCenterToOrigin(&circle1) << "\n";
    
    cout << "Расстояния между центрами двух окружности: " << distanceFromCircleToOtherCircle(&circle1, &circle2) << "\n";
    
    cout << "Окружность один вписана в окружность два?: " << isInscribedCircles(&circle1, &circle2) << "\n";
    
    cout << "Пересекаются ли две окружности?: " << isIntersectionCircles(&circle2, &circle1) << "\n";
    
    cout << "-------------------------------------------------------------" << "\n";
    cout << "\t\t\t\t\t\tМетоды\t\t\t\t\t\t" << "\n";
    cout << "-------------------------------------------------------------" << "\n";
    
    CircleClass Circle1(2, 6, 4);
    CircleClass Circle2(6, 3, 1);
    
    cout << "Расстояния от центра окружности до начала координат: " << Circle1.distanceFromCenterToOrigin() << "\n";
    
    cout << "Расстояния между центрами двух окружности: " << Circle1.distanceFromCircleToOtherCircle(Circle2) << "\n";
    
    cout << "Окружность один вписана в окружность два?: " << Circle2.isInscribedCircles(Circle1) << "\n";
    
    cout << "Пересекаются ли две окружности?: " << Circle2.isIntersectionCircles(Circle1) << "\n";
    
    return 0;
}


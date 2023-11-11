#include <iostream>
#include<utility>
#include"functions.h"

using Point = std::pair<int, int>;


int main() {

    Point p1 = enter();
    input object(p1);

    Point p2 = enter();
    input object2(p2);

    std::cout << "sum is "<<std::endl;
    Point p3;
    p3 =object + object2;

    std::cout << "ymnojenie is " << std::endl;
    Point p4;
    p4 = object * object2;

    std::cout << "delenie is " << std::endl;
    Point p5;
    p5 = object / object2;

    std::cout << "get chisl"<<std::endl;
    std::cout << std::endl << object.getChisl() << std::endl;

    std::cout << "get znam" << std::endl;
    std::cout << std::endl << object.getZnam()  << std::endl;
  
}
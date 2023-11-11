#include<iostream>
#include<utility>
#include"functions.h"

using Point = std::pair<int, int>;

Point enter()
{
    std::cout << std::endl << "enter number"<<std::endl;
    int number1, number2;
  
    std::cin >> number1;
    std::cin.ignore();
    std::cout << "-----"<<std::endl;
    std::cin >> number2;

    Point p1;
    p1.first  = number1;
    p1.second = number2;

    if (p1.second == 0) {
        std::cout << "zero";
        throw std::invalid_argument("It is zero !");
    }
    if (p1.first < 0 && p1.second < 0) {
        p1.first = abs(p1.first);
        p1.second = abs(p1.second);
    }
    else 
        if (p1.second < 0) {
            p1.second = abs(p1.second);
            p1.first = -p1.first;
    }
    return p1;
}

input::input(Point& p1) {

    if (_chisl == 0 && _znam == 0) {
        this->_chisl = p1.first;
        this->_znam = p1.second;
    } 
}

    int nod(int a, int b) {
        a = abs(a), b = abs(b);

        if (b == 0)  return a;
        else
            return nod(b, a % b);
    }
    Point input::sokrdrob(Point& p1) {

        int sokr = nod(p1.first, p1.second);
        p1.first /= sokr;
        p1.second /= sokr;

        return p1;

    }

    Point input::operator+(const input& p2) {
        Point p3;
        p3.first = (_chisl * p2._znam) + (p2._chisl * _znam);
        p3.second = (_znam * p2._znam);
        sokrdrob(p3);
        printValues(p3);
        return p3;
    
    }
    Point input::operator*(const input& p2) {
        Point p3;
        p3.first = (_chisl * p2._chisl);
        p3.second = (_znam * p2._znam);
        sokrdrob(p3);
        printValues(p3);
        return p3;
    }
    Point input::operator/(const input& p2) {
        if (p2._chisl == 0) {
            std::cout << std::endl << "delenie na 0" << std::endl;
            throw std::invalid_argument("delenie na 0!");

        }
        else
        {
            Point p3;

            p3.first = (_chisl * p2._znam);
            p3.second = (_znam * p2._chisl);

            sokrdrob(p3);
            printValues(p3);

            return p3;
        }
    }

    int input::getChisl()
    {
        return _chisl;
    }

    int input::getZnam()
    {
        return _znam;
    }

 void input::printValues(Point& p1) {
     if (p1.first == 0) {
         std::cout << std::endl << 0 << std::endl;
     }
        else

         if (abs(p1.first) == p1.second) {
             if (p1.first < 0) {
                 std::cout << std::endl << -1 << std::endl;
             }
             else
             {
                 std::cout << std::endl << 1 << std::endl;
             }
         }
            else {
             if (p1.second < 0) {
                 p1.second = abs(p1.second);
                 p1.first = -p1.first;

             }
                sokrdrob(p1);
                std::cout << std::endl << p1.first << std::endl << "---" << std::endl << p1.second << std::endl;
            }

    }
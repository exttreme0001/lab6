#pragma once
#include<utility>
using Point = std::pair<int, int>;

Point enter();

    class input {

private:
       input() = default;

       int _chisl = 0, _znam = 0;
       int _chisl2 = 0, _znam2 = 0;

public:
    
       input(Point& p1);
       
       Point operator+(const input& p);
       Point operator*(const input& p2);
       Point operator/(const input& p2);

       Point sokrdrob(Point& p1);

       int getChisl();
       int getZnam();

       void printValues(Point& p1);
};
  
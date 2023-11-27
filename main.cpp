#include <iostream>
#include"class.h"

int main() {
	input p1(1, 0);
	p1.printValues();
	input p2(0, 25);
	p2.printValues();
	input p3(1, 1);
	p3=p1 + p2;
	p3.printValues();
	p3=p1 * p2;
	p3.printValues();
	p3=p1 / p2;
	p3.printValues();





}
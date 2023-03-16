#pragma once
#include <iostream>


using namespace std;

class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle(int w, int h);
	void Print();
	int Area();
	int Perimeter();
	float CreateCircle();
};
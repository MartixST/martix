#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle (int w, int h) {
    width = w;
    height = h;
}

void Rectangle::Print(){
    cout << "WIDTH: " << width << ", HEIGHT: " << height << endl;
}

int Rectangle::Area() {
    return width * height;
}

int Rectangle::Perimeter() {
    return 2 * (width + height);
}

float Rectangle::CreateCircle() {
    float diagonal = sqrt(pow(width, 2) + pow(height, 2));
    return diagonal;
}
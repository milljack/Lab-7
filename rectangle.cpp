#include "rectangle.h"

#include <iostream>
#include <string>
using namespace std;


Rectanlge::Rectangle() : Shape(){
        this->width = 0;
        this->height = 0;
}

Circle::~Circle(){
        this->width = w;
        this->height = h;
}



void Shape::display() const {
        cout << "width: " << this->width << endl;
        cout << "height: " << this->height << endl;
}
#include "circle.h"

#include <iostream>
#include <string>
using namespace std;


Circle::Circle() : Shape(){
        this->radius = 0;
}

Circle::~Circle(){
        this->radius = r;
}



void Shape::display() const {
        cout << "radius: " << this->radius << endl;
    
}
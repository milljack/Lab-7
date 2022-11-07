#include "shape.h"

#include <iostream>
#include <string>
using namespace std;


Shape::Shape(){
        this->name = "some shape";
        this->color = "some color";
        this->area = 0;
}

Shape::~Shape(string n, string c, int a){
        this->name = n;
        this->color = c;
        this->area = a;
}



void Shape::display() const {
        cout << "name: " << this->name << endl;
        cout << "color: " << this->color << endl;
        cout << "area: " << this->area << endl;
}
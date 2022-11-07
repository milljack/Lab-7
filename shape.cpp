#include "shape.h"

#include <iostream>
#include <string>
using namespace std;


Shape::Shape(){
        this->name = "some shape";
        this->color = "some color";
        this->area = 0;
}

Shape::Shape(string n, string c, int a){
        this->name = n;
        this->color = c;
        this->area = a;
}

//destructor
Shape::~Shape(){
        }


//AOO
Shape& Shape::operator=(const Shape& s){
        this->name = s.name;
        this->color = s.color;
        this->area = s.area;
}

//copy constructor
Shape::Shape(const Shape7 s){
        this->name = s.name;
        this->color = s.color;
        this->area = s.area;
}

//gettes
string Shape::get_name (){
        return this->name;
}
string Shape::get_color (){
        return this->color;
}
int Shape::get_area (){
        return this->area;
}
//setters
void Shape::set_name (string new_name){
        this->name = new_name;
}
void Shape::set_color (string new_color){
        this->color = new_color;
}
void Shape::set_area (int new_area){
    this->area = new_area;
}


void Shape::print() const {
        cout << "name: " << this->name << endl;
        cout << "color: " << this->color << endl;
        cout << "area: " << this->area << endl;
}
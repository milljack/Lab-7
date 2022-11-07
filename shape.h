#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape {

protected:
        const string name;
        string color;
        int area;
public:
        Shape();
        Shape(string, string, int);
        

    //destructor 
    ~Shape();
    //AOO
    Shape& operator=(const Shape&);
    //copy constructor
    Shape(const Shape&);

       
};

//getters
string get_name();
string get_color();
string get_area();
//setters
void set_name(string);
void set_color(string);
void set_area(int);

 void print_Shape();

#endif
~                                                                               
~                                                                               
~                      

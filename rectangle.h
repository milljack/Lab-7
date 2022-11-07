#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle : public Shape { 
    private:
        float width;
        float height;
    public: 
        Rectangle();
        ~Rectangle();

        void display() const;
};

#endif
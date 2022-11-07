#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

class Circle : public Shape {
    private:
        float radius;
    public:
        Circle ();
        ~Circle ();
        void display() const;
        
};

#endif
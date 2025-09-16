#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Generic Drawing ..." << endl;
    }
};

class Circle : public Shape
{
    public:
    void draw()  override
    {
        cout << "Circle Drawing ..." << endl;
    }
};

class Rectangle : public Shape
{
    public:
    void draw() override
    {
        cout << "Rectangle Drawing ..." << endl;
    }
};
class Triangle : public Shape
{
    public:
    void draw() override
    {
        cout << "Triangle Drawing ..." << endl;
    }
};

void ShapeDrawing(Shape * s)
{
    s->draw(); // draw is polymorphic
}

int main(){

    // Circle c;
    // Rectangle r;
    
    // ShapeDrawing(&c);
    // ShapeDrawing(&r);

    // Triangle *t = new Triangle();
    // ShapeDrawing(t);


    // without vertual keyword
    
    Shape *s = new Shape();
    s->draw();
    
    //UPCasting
    Shape *s3 = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c->draw();

    //DOWNCASTING 
    Shape* s2 = new Shape(); 
    Circle* c2 = (Circle*)s2;
    c2->draw();

    return 0;
}
#ifndef _07BIRD_H
#define _07BIRD_H
#include <iostream>

class Bird 
{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    virtual ~Bird() {}   // virtual destructor
}; 

class Sparrow : public Bird
{
private:
    void eat() override {
        std::cout << "Sparrow is eating\n";
    }
    void fly() override {
        std::cout << "Sparrow is flying\n";
    }
};

class Eagle : public Bird
{
private:
    void eat() override {
        std::cout << "Eagle is eating\n";
    }
    void fly() override {
        std::cout << "Eagle is flying\n";
    }
};

#endif

#include<iostream>
#include"_07bird.h"
using namespace std;

void birdDoSomething(Bird* &bird){
bird->fly();
bird->eat();
bird->fly();
}

int main(){

    Bird *bird = new Sparrow();
    birdDoSomething(bird);

    delete bird;

    return 0;
}
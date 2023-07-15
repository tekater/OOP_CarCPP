#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class wheels {
protected:
    int size;
public:
    wheels(int s = 10) :size{ s } {}
};

class door {
protected:
    string color;
public:
    door(string c = "red") :color{ c } {}
};

class Engine {
protected:
    int power;
public:
    Engine(int p = 200) :power{ p } {}
};

class Car :public door , public wheels , public Engine{
    string color;
public:
    Car(string c, string c2, int s, int p) : color{ c }, wheels{ s }, door{ c2 }, Engine{ p } {}
};
int main()
{
    setlocale(0, "");


}

#ifndef LAB3_CYLINDER_H
#define LAB3_CYLINDER_H

#endif //LAB3_CYLINDER_H
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
class Cylinder{
    double H;
public:
    Cylinder(double H1){H=H1;}
    virtual double square()=0;
    double volume(){return square()*H; }
};


class RoundCylinder:public Cylinder{
    double R;
public:
    RoundCylinder(double H2,double R1):Cylinder(H2){R=R1;}
    double square() override{return M_PI*pow(R,2);}
};


class RectanglePrizm:public Cylinder{
    double a,b;
public:
    RectanglePrizm(double H3, double a1, double b1) :Cylinder(H3) {
        a = a1;
        b = b1;
    }
    double square() override{return a*b;}
};


void printInfo(Cylinder &cylinder){
    cout<<"Volume of the shape equals: "<<cylinder.volume()<<endl;
}
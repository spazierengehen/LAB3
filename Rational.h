#ifndef LAB3_RATIONAL_H
#define LAB3_RATIONAL_H
#endif //LAB3_RATIONAL_H
#include<iostream>
#include<fstream>
using namespace std;
class Rational{
    int a,b;
public:
    Rational(){}
    ~Rational(){}


    int get_a(){return a;}
    int get_b(){return b;}
    void set_a(int val_a){a=val_a;}
    void set_b(int val_b){b=val_b;}

    Rational(int x,int y){a=x;b=y;}
    Rational(const Rational &other){this->a=other.a;this->b=other.b;}

    Rational &operator =(const Rational &other){this->a=other.a;this->b=other.b;return *this;}
    int operator ==(const Rational &other){return (a*other.b==b*other.a);}
    int operator !=(const Rational &other){return (a*other.b!=b*other.a);}
    Rational &operator +(const Rational &other){this->a=a*other.b+b*other.a;this->b=b*other.b;return *this;}
    Rational &operator -(const Rational &other){this->a=a*other.b-b*other.a;this->b=b*other.b;return *this;}
    friend ostream& operator<<(ostream& stream, Rational& other) {
        stream<< "Rational "<< other.a<< "/"<< other.b << " ";
        return stream;
    }
    friend istream& operator>>(istream& stream, Rational& other) {
        stream >>other.a>>other.b;
        return stream;
    }
};

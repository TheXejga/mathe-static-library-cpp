#ifndef MATHE_H_INCLUDED
#define MATHE_H_INCLUDED
#include <string>

class Number
{
private:
    double value;
    double pi;
public:
    Number(double value);
    void setValue(double value);
    void changeValue(double value);
    void doSquare();
    void doRoot();
    void doInvert();
    double getValue();
    double getSquare();
    double getRoot();
    int getInvert();
    Number(bool randomNumber);
};

/*class squareFc                            COMMING SOON
{
private:
    double p;
    double q;
    double x;
public:
    squareFc(double p, double q);
    double getpX();
    double getnX();
    double getP();
    double getQ();
    void printFc();
    void dopX(Number number);
};*/

class Circle
{
private:
    double radius;
    double circumference;
    double diameter;
    double pi;
public:
    void setRadius(double value);
    void setCircumference(double value);
    void setDiameter(double value);
    double getRadius();
    double getCircumference();
    double getDiameter();
    Circle(double value, std::string mode);
};

#endif // MATHE_H_INCLUDED

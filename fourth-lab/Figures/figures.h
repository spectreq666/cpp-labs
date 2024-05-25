#ifndef FIGURES_H
#define FIGURES_H

#include <iostream>
#include <cmath>

class IGeoFig {
public:
    virtual double square() = 0;
    virtual double perimeter() = 0;
};

class Vector2D {
public:
    double x, y;
};

class IPhysObject {
public:
    virtual double mass() = 0;
    virtual Vector2D position() = 0;
    virtual bool operator==(const IPhysObject &ob) const = 0;
    virtual bool operator<(const IPhysObject &ob) const = 0;
};

class IPrintable {
public:
    virtual void draw() = 0;
};

class IDialogInitiable {
public:
    virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
    virtual const char *classname() = 0;
    virtual unsigned int size() = 0;
};

class Interface : public IGeoFig, public IPhysObject, public IPrintable, public IDialogInitiable, public BaseCObject {
};

class Rectangle : public Interface {
public:
    Rectangle(double a, double b, double px, double py, double m);

    Rectangle();

    double square() override;
    double perimeter() override;
    double mass() override;
    Vector2D position() override;
    bool operator==(const IPhysObject &ob) const override;
    bool operator<(const IPhysObject &ob) const override;
    void draw() override;
    void initFromDialog() override;
    const char *classname() override;
    unsigned int size() override;

private:
    double side_1;
    double side_2;
    double mass_of_object;
    Vector2D pos;
};

class Trapezoid : public Interface {
public:
    Trapezoid(double a, double b, double h, double px, double py, double m);

    Trapezoid();

    double square() override;
    double perimeter() override;
    double mass() override;
    Vector2D position() override;
    bool operator==(const IPhysObject &ob) const override;
    bool operator<(const IPhysObject &ob) const override;
    void draw() override;
    void initFromDialog() override;
    const char *classname() override;
    unsigned int size() override;

private:
    double lower_base;
    double upper_base;
    double height;
    double mass_of_object;
    Vector2D pos;
};

#endif // FIGURES_H

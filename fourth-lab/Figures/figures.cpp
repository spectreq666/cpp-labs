#include "figures.h"

Rectangle::Rectangle(double a, double b, double px, double py, double m) {
    side_1 = a;
    side_2 = b;
    mass_of_object = m;
    pos = {px, py};
}

Rectangle::Rectangle() {
    side_1 = 0;
    side_2 = 0;
    mass_of_object = 0;
    pos = {0, 0};
}

double Rectangle::square() {
    return side_1 * side_2;
}

double Rectangle::perimeter() {
    return 2*(side_1 + side_2);
}

double Rectangle::mass() {
    return mass_of_object;
}

Vector2D Rectangle::position() {
    return pos;
}

bool Rectangle::operator==(const IPhysObject &ob) const {
    const auto *other = dynamic_cast<const Rectangle *>(&ob);
    return mass_of_object == other->mass_of_object;
}

bool Rectangle::operator<(const IPhysObject &ob) const {
    const auto *other = dynamic_cast<const Rectangle *>(&ob);
    return mass_of_object < other->mass_of_object;
}

void Rectangle::draw() {
    std::cout << "Side 1: " << side_1 << std::endl;
    std::cout << "Side 2: " << side_2 << std::endl;
    std::cout << "The mass of object base: " << mass_of_object << std::endl;
    std::cout << "The position: (" << pos.x << ";" << pos.y << ")" << std::endl;
}

void Rectangle::initFromDialog() {
    std::cout << "Enter side 1:";
    std::cin >> side_1;
    std::cout << "Enter side 2:";
    std::cin >> side_2;
    std::cout << "Enter the mass:";
    std::cin >> mass_of_object;
    std::cout << "Enter the position:";
    std::cin >> pos.x >> pos.y;
}

const char *Rectangle::classname() {
    return "Rectangle";
}

unsigned int Rectangle::size() {
    return sizeof(*this);
}

Trapezoid::Trapezoid(double a, double b, double h, double px, double py, double m) {
    lower_base = a;
    upper_base = b;
    height = h;
    mass_of_object = m;
    pos = {px, py};
}

Trapezoid::Trapezoid() {
    lower_base = 0;
    upper_base = 0;
    height = 0;
    mass_of_object = 0;
    pos = {0, 0};
}

double Trapezoid::square() {
    return 0.5 * (lower_base + upper_base) * height;
}

double Trapezoid::perimeter() {
    return height / (height / ((lower_base - upper_base) / 2)) * 2 + lower_base + upper_base;
}

double Trapezoid::mass() {
    return mass_of_object;
}

Vector2D Trapezoid::position() {
    return pos;
}

bool Trapezoid::operator==(const IPhysObject &ob) const {
    const auto *other = dynamic_cast<const Trapezoid *>(&ob);
    return mass_of_object == other->mass_of_object;
}

bool Trapezoid::operator<(const IPhysObject &ob) const {
    const auto *other = dynamic_cast<const Trapezoid *>(&ob);
    return mass_of_object < other->mass_of_object;
}

void Trapezoid::draw() {
    std::cout << "The lower base: " << lower_base << std::endl;
    std::cout << "The upper base: " << upper_base << std::endl;
    std::cout << "The height base: " << height << std::endl;
    std::cout << "The mass of object base: " << mass_of_object << std::endl;
    std::cout << "The position: (" << pos.x << ";" << pos.y << ")" << std::endl;
}

void Trapezoid::initFromDialog() {
    std::cout << "Enter the lower base:";
    std::cin >> lower_base;
    std::cout << "Enter the upper base:";
    std::cin >> upper_base;
    std::cout << "Enter the height:";
    std::cin >> height;
    std::cout << "Enter the mass:";
    std::cin >> mass_of_object;
    std::cout << "Enter the position:";
    std::cin >> pos.x >> pos.y;
}

const char *Trapezoid::classname() {
    return "Trapezoid";
}

unsigned int Trapezoid::size() {
    return sizeof(*this);
}


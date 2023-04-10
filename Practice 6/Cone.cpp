#include <iostream>
#include <cmath>
#include "Cone.h"

const double pi = 3.14159265;

Cone::Cone() {
    x = y = z = radius = height = 0;
}

Cone::Cone(double r, double h) {
    x = y = z = 0.0;
    radius = r;
    height = h;
}

Cone::Cone(double a, double b, double c, double r, double h) {
    x = a;
    y = b;
    z = c;
    radius = r;
    height = h;
}

void Cone::setCoordinate(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}

void Cone::setRadius(double r) {
    radius = r;
}

void Cone::setHeight(double h) {
    height = h;
}

double Cone::getRadius() {
    return radius;
}

double Cone::getHeight() {
    return height;
}

// Ďëîůŕäü ďîëíîé ďîâĺđőíîńňč
double Cone::area() {
    double l = sqrt(height * height + radius * radius);
    return pi * radius * (radius + l);
}
// Îáúĺě
double Cone::volume() {
    return pi * radius * radius * height / 3;
}

std::ostream& operator<<(std::ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r = " << obj.radius << " ";
    stream << "h = " << obj.height << "\n";
    return stream;
}

Trank_Cone::Trank_Cone() {
    x = y = z = radius1 = radius2 = height = 0;
}

Trank_Cone::Trank_Cone(double r1, double r2, double h) {
    x = y = z = 0.0;
    radius1 = r1;
    radius2 = r2;
    height = h;
}

Trank_Cone::Trank_Cone(double a, double b, double c, double r1, double r2, double h) {
    x = a;
    y = b;
    z = c;
    radius1 = r1;
    radius2 = r2;
    height = h;
}

void Trank_Cone::setRadiusMax(double r1) {
    radius1 = r1;
}

void Trank_Cone::setRadiusMin(double r2) {
    radius2 = r2;
}

double Trank_Cone::getRadiuses() {
    return radius1;
    return radius2;
}

double Trank_Cone::area() {
    double l = sqrt(height * height + (radius1 - radius2) * (radius1 - radius2));
    return pi * radius1 * radius1 + pi * radius2 * radius2 + pi * (radius1 + radius2) * l;
}

double Trank_Cone::volume() {
    return (pi * height * (radius1 * radius1 + radius1 * radius2 + radius2 * radius2)) / 3;
}

// Âűâîä äŕííűő ęîíóńŕ
std::ostream& operator<<(std::ostream& stream, Trank_Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r1 = " << obj.radius1 << " ";
    stream << "r2 = " << obj.radius2 << " ";
    stream << "h = " << obj.height << "\n";
    return stream;
}

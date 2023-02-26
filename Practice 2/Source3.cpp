#include <iostream>
#include <cmath>
#include "Header3.h"

figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    this->x1 = x1;
    this->x2 = x2;
    this->x3 = x3;
    this->x4 = x4;
    this->y1 = y1;
    this->y2 = y2;
    this->y3 = y3;
    this->y4 = y4;
}
void figure::show(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)),
        c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)), d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
    std::cout << "Ñòîðîíà A: " << a << endl;
    std::cout << "Ñòîðîíà B: " << b << endl;
    std::cout << "Ñòîðîíà C: " << c << endl;
    std::cout << "Ñòîðîíà D: " << d << endl;
}
bool figure::is_prug(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float a, float d;
    a = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    d = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
    if (a == d) {
        return true;
    }else {
        return false;
    }
}
bool figure::is_square(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float s1, s2, S;
    float p1, p2;
    float a, b, c, a1, b1;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    a1 = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
    b1 = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
    p1 = (a + b + c) / 2;
    p2 = (a1 + b1 + c) / 2;
    s1 = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - c));
    s2 = sqrt(p2 * (p2 - a1) * (p2 - b1) * (p2 - c));
    S = s1 + s2;
    return S;
}
bool figure::is_romd(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)),
        c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)), d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
    float l1 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)), l2 = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
    if (a == b && a == c && a == d && l1 != l2) {
        return true;
    }else {
        return false;
    }
}
bool figure::is_in_circle(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)),
        c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)), d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
    float l1 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)), l2 = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
    if (l1 * l2 == a * c + b * d) {
        return true;
    }else {
        return false;
    }
}
bool figure::is_out_circle(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
    float a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)), b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)),
        c = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4)), d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
    float l1 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)), l2 = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
    if (a + c == b + d) {
        return true;
    }else {
        return false;
    }
}

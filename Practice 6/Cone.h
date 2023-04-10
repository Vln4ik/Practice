#pragma once
#include <iostream>

// Ęëŕńń ęîíóńŕ.
class Cone {
private:
    double x, y, z;        // ňđĺőěĺđíűĺ ęîîđäčíŕňű
    double radius;         // đŕäčóń
    double height;         // âűńîňŕ
public:
    // Ęîíńňđóęňîđ ďî óěîë÷ŕíčţ
    Cone();
    // Ęîíńňđóęňîđ ń öĺíňđîě â íŕ÷ŕëĺ ęîîđäčíŕň
    Cone(double r, double h);
    // Ęîíńňđóęňîđ äë˙ Cone
    Cone(double a, double b, double c, double r, double h);

    // Ôóíęöčč äîńňóďŕ
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double volume();

    friend std::ostream& operator<<(std::ostream& stream, Cone obj);
};

class Trank_Cone : public Cone {
private:
    double x, y, z;                 // ňđĺőěĺđíűĺ ęîîđäčíŕňű
    double radius1, radius2;        // đŕäčóń
    double height;                  // âűńîňŕ

public:
    // Ęîíńňđóęňîđ ďî óěîë÷ŕíčţ
    Trank_Cone();
    // Ęîíńňđóęňîđ ń öĺíňđîě â íŕ÷ŕëĺ ęîîđäčíŕň
    Trank_Cone(double r1, double r2, double h);
    // Ęîíńňđóęňîđ äë˙ Trunk_Cone
    Trank_Cone(double a, double b, double c, double r1, double r2, double h);

    // Ôóíęöčč äîńňóďŕ
    void setRadiusMax(double r1);
    void setRadiusMin(double r2);
    double getRadiuses();
    double area();
    double volume();

    friend std::ostream& operator<<(std::ostream& stream, Trank_Cone obj);
};

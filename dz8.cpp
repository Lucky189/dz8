#include <iostream>

struct Point
{
    int x;
    int y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

struct Piramide
{
    Triangle mainSide;
    double height;
};

int main()
{
    Piramide piramide;

    piramide.mainSide.a.x = 10;

    return 0;
}

void Show(Piramide* piramide)
{
    std::cout << "Height = " << piramide->height << std::endl;

    std::cout << "Main Side A: [" << piramide->mainSide.a.x << ", " << piramide->mainSide.a.y << "]" << std::endl;
    std::cout << "Main Side B: [" << piramide->mainSide.b.x << ", " << piramide->mainSide.b.y << "]" << std::endl;
    std::cout << "Main Side C: [" << piramide->mainSide.c.x << ", " << piramide->mainSide.c.y << "]" << std::endl;
}

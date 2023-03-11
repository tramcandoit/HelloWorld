// Triangle.h

#include "Shape.h"
#include <math.h>


class Triangle : public Shape {
    protected:
        float length;
    public:
        Triangle(float w, float h, float l) {
            if (w + h > l or h + l > w or l + w > h)
            {
                width = w; height = h; length = l;
            }
        }
        auto getLength() {
            return length;
        }
        void setLength(float l) {
            if (l >= 0)
                length = l;
        }

        bool isTriangle() {
            if (Area() > 0)
                return 1;
            return 0;
        }
        bool isRightTriangle() {
            if (isTriangle() and (width*width + height*height == length*length or height*height + length*length == width*width or length*length + width*width == height*height))
                return 1;
            return 0;
        }
        bool isEquilateral() {
            if (isTriangle() and (width == height and height == length))
                return 1;
            return 0;
        }
        bool isIsosceles() {
            if (isTriangle() and not isEquilateral() and (width == height or height == length or length == width))
                return 1;
            return 0;
        }

        float Perimeter() {
            return width + height + length;
        }

        float Area() {
            float half_p = Perimeter()/2;
            return sqrt(half_p*(half_p-width)*(half_p-height)*(half_p-length));
        }
};
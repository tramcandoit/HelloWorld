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
        auto getLength() const {
            return length;
        }
        void setLength(float l) {
            if (l >= 0)
                length = l;
        }
        auto Area() {
            float half_p = (width + height + length) /2;
            return sqrt(half_p*(half_p-width)*(half_p-height)*(half_p-length));
        }
};
#include <iostream>
#include <math.h>
using namespace std;

class Shape {
    protected:
        float width;
        float height;
    public:
        auto getWidth() const {
            return width;
        }
        auto getHeight() const {
            return height;
        }
        void setWidth(float w) {
            if (w>= 0)
                width = w;
        }
        void setHeight(float h) {
            if (h >= 0)
                height = h;
        }
};

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


int main() {
    
    float w, h, l;
    cin >> w >> h >> l;
    Triangle A(w,h,l);
    cout << A.Area() <<'\n';
    return 0;
}
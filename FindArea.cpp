#include <iostream>
#include <math.h>
#include "Shape.h"
using namespace std;



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
    cout <<  "Nhap ba canh cua 1 tam giac: ";
    cin >> w >> h >> l;
    Triangle A(w,h,l);
    cout << "Dien tich tam giac la: (tra ve 0 neu khong phai la tam giac hop le)" << ' ';
    cout << A.Area() <<'\n';
    return 0;
}
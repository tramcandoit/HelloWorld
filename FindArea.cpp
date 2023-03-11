// FindArea.cpp

#include <iostream>
#include <math.h>
#include <iomanip>
#include "Triangle.h"
using namespace std;

int main() {
    cout << "Tri test";
    float w, h, l;
    cout <<  "Nhap ba canh cua 1 tam giac: ";
    cin >> w >> h >> l;
    Triangle A(w,h,l);
    if (A.isTriangle())
        cout << "Day la tam giac" << '\n';
    else
    {
        cout << "Day khong phai la tam giac";
        return 0;
    }
    
    if (A.isRightTriangle())
        cout << "Day la tam giac vuong" << '\n';
    if (A.isEquilateral())
        cout << "Day la tam giac deu" << '\n';
    if (A.isIsosceles())
        cout << "Day la tam giac can" << '\n';

    cout << "Dien tich tam giac la: " << setprecision(3) <<  A.Area() << " (tra ve 0 neu khong phai la tam giac hop le)" <<'\n';
    cout << "Tri test";
    return 0;
}
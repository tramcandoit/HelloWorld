#include <iostream>
#include <math.h>
#include "Triangle.h"
using namespace std;

int main() {
    
    float w, h, l;
    cout <<  "Nhap ba canh cua 1 tam giac: ";
    cin >> w >> h >> l;
    Triangle A(w,h,l);
    cout << "Dien tich tam giac la: (tra ve 0 neu khong phai la tam giac hop le)" << ' ';
    cout << A.Area() <<'\n';
    return 0;
}
#include <iostream>

using namespace std;

int timkiem(int a[], int n, int key) {
    for (int i=0; i<n; i++)
    {
        if (a[i]==key)
            return i;
    }
return -1;
}

int timkiem2 (int a[], int n, int key) {
a[n]=key;
int i=0;
while (a[i]!=key)
{
    i++;
}
// if (i<n) return i;
    // else return -1;
    return i<n ? i : -1;
}

int binarysearch ( int a[], int n, int key) {
int l=0, r=n-1, mid ;
while (l<=r){
    mid = (l+r)/2;
    if (key < a[mid] ) r=mid-1;
    else if (key>a[mid]) l=mid+1;
        else return mid;
}
return -1;
}

int main()
{
    int a[]={2,5,7,8,23,34,58,89}, key;
    int arrlength = sizeof(a) / sizeof(a[0]);
    //if (timkiem2(a,arrlength,0)!= -1)
        //cout << "Tim thay";
        //else cout << "khong tim thay";
    cout << binarysearch(a, arrlength, 24);
    return 0;
}

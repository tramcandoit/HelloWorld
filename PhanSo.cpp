#include <iostream>
using namespace std;

class PhanSo {
private:
	int tu; 
	int mau;
public:
	void Nhap()
	{
		cout << "Nhap lan luot tu so va mau so: ";
		cin >> tu >> mau;
	}
	void Cong(PhanSo a, PhanSo b)
	{
		mau = a.mau * b.mau;
		tu = a.tu * b.mau + b.tu * a.mau;
	}
	void Nhan(PhanSo a, PhanSo b)
	{
		tu = a.tu * b.tu;
		mau = a.mau * b.mau;
	}
	void Xuat()
	{
		cout << tu << "/" << mau;
	}
};

int main()
{
	PhanSo a, b, c;
	a.Nhap();
	b.Nhap();
	c.Cong(a, b);
	cout << "Tong hai phan so: ";
	c.Xuat();
	cout << endl;
	c.Nhan(a, b);
	cout << "Nhan hai phan so: ";
	c.Xuat();
	return 0;
}
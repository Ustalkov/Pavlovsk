#include <iostream>
#include <conio.h>
#include <math.h>
#pragma hdrstop

using namespace std;

int main(int aegc, char* argv[])
{
	int ac, bc, cc, i = 0, k, l;
	double a, b, c, x, xn, xk, dx, F;
	cout << "Enter a="; cin >> a;
	cout << "Enter b="; cin >> b;
	cout << "Enter c="; cin >> c;
	cout << "Enter xn="; cin >> xn;
	cout << "Enter xk="; cin >> xk;
	cout << "Enter dx="; cin >> dx;
	ac = a, bc = b, cc = c;
	if (ac == bc)k = 0;
	else k = 1;
	if (ac == cc)l = 0;
	else l = 1;
	cout << "\n\nn X" << " " << "F" << endl<<endl;
	for (x = xn; x <= xk; x += dx)
	{
		if (((x + c) < 0) && (a != 0))F = -a * x*x*x - b;
		if (((x + c) < 0) && (a == 0))F = (x - a)/(x - c);
		else F = (x/c) + (c/x);
		if ((k | l) != 0)
		{
			cout << ++i << "|" << x << "|" << F << endl;

		}
		else cout<<++i<< "|" << x << "|" <<int (F) << endl;
	}
	return 0;
}
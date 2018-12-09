#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#pragma hdrstop

using namespace std;

int main(int argc, char* argv[])
{
	int i, n, count = 0, imin;
	float temp, min = 0, sum = 0;
	bool is = 1;
	cout << ("Vvedite razmernost massiva: n="); cin >> n;
	cout << ("Vvedite elementi massiva: n=")<<endl<<endl; 
	float *p = new float[n];
	for (i = 0; i < n; i++)cin >> p[i];
	for (i = 0; i < n; i++);
	if (p[i] == 0);
	{
		count++;
	}
	cout << ("\nKolichestvo elementov ravnich nul: ") << count << endl << endl;
	min = p[0];
	for (i=0;i<n;i++)
		if (p[i] < min)
		{
			min = p[i];
			imin = i;
		}
	cout << ("Minimal element: ") << min << endl;
	cout << ("Pozicia minimal elementa ") << imin + 1 << endl;
	for (i = imin + 1; i < n; i++)
	{
		sum += p[i];
	 }
	cout << ("\nSumma elementov raspoloz posle minimalnogo: ") <<
		sum << endl;
	while (is)
	{
		is = 0;
		for(i = 0; i < n - 1;i++)
			if (fabs(p[i]) > fabs(p[i + 1]))
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
				is = 1;
			}
	}
	cout << ("\nOtsortirovan massiv po vozrast moduleu elementov: ") << endl << endl;
	for (i = 0; i < n; i++)cout << p[i];
	return 0;
}
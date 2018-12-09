#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <fstream>
#include <iomanip>
#pragma hdrstop

using namespace std;

int main(int argc, char* argv[])
{
	int n, m, i, j;	
	cout<<("Vvedite raznomernost kvadratn matrix n="); cin>>n;
		float **A=new float*[n];	
		for (i = 0; i < n; i++)A[i] = new float[n];
		float **A1 = new float*[n];
	for (i = 0; i < n; i++)A1[i] = new float[n];
	cout << ("\nVvedite elementi massiva:") << endl << endl;
    void srand();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			A[i][j] = -5.2 + rand();
			A1[i][j] = A[i][j];
			cout << setw(6) << A[i][j];
		}
		cout << endl;
	}
	cout << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				A1[n - 1 - i][n - 1 - j] = A[i][n - 1 - j];
		}
		cout << ("Sdvinyta matrix:") << endl << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << A1[j][i] << " ";
			}
			cout << endl;
		}
		return 0;
	}

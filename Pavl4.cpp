#include <stdio.h>
#include <math.h>

struct Point {
	float x;
	float y;
};

int const MAX = 7;
Point a[MAX] = {
	{-1,1},
	{1,1},
	{1,-1},
	{-1,-1},
	{-5,6},
	{-100,3},
	{0,0}
};

int NextSquare = 0;
struct Square {
	Point p1, p2, p3, p4;
};

Square b[MAX];


float rasst(int n1, int n2)
{
	float res;
	res = sqrt(pow(a[n1].x - a[n2].x, 2) + pow(a[n1].y - a[n2].y, 2));
	return res;
}

int InSquare(int n, int n1)
{
	if ((b[n].p1.x == a[n1].x) && (b[n].p1.y == a[n1].y)) return 1;
	if ((b[n].p2.x == a[n1].x) && (b[n].p2.y == a[n1].y)) return 1;
	if ((b[n].p3.x == a[n1].x) && (b[n].p3.y == a[n1].y)) return 1;
	if ((b[n].p4.x == a[n1].x) && (b[n].p4.y == a[n1].y)) return 1;
	return 0;
}

int FindSquare(int n1, int n2, int n3, int n4)
{
	int n = 0;
	for (n = 0; n < MAX; n++)
	{
		if ((InSquare(n, n1)) && (InSquare(n, n2)) && (InSquare(n, n3)) && (InSquare(n, n4)))
		{
			return 1;
		}
	}
	return 0;
}

void main()
{
	printf("\n");
	for (int n1 = 0; n1 < MAX; n1++)
	{
		for (int n2 = 0; n2 < MAX; n2++)
		{
			for (int n3 = 0; n3 < MAX; n3++)
			{
				for (int n4 = 0; n4 < MAX; n4++)
				{
					if ((n4 == n3) || (n4 == n2) || (n4 == n1) || (n2 == n3) || (n3 == n1) || (n2 == n1)) continue;
					float s1, s2, s3, s4, d1, d2;
					s1 = rasst(n1, n2);
					s2 = rasst(n2, n3);
					s3 = rasst(n3, n4);
					s4 = rasst(n4, n1);
					d1 = rasst(n1, n3);
					d2 = rasst(n2, n4);
					if (!FindSquare(n1, n2, n3, n4))
					{
						if ((s1 == s2) && (s2 == s3) && (s3 == s4) && (s1 == s2))
						{
							b[NextSquare].p1 = a[n1];
							b[NextSquare].p2 = a[n2];
							b[NextSquare].p3 = a[n3];
							b[NextSquare].p4 = a[n4];
							NextSquare++;
						}
					}
				}
			}
		}
	}

	for (int n = 0; n < NextSquare; n++)
	{
		printf("Kvadrat: (%5.2f,%5.2f),(%5.2f,%5.2f),(%5.2f,%5.2f),(%5.2f,%5.2f)\n", b[n].p1.x, b[n].p1.y, b[n].p2.x, b[n].p2.y, b[n].p3.x, b[n].p3.y, b[n].p4.x, b[n].p4.y);
	}

}
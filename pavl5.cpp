
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>

using namespace std;

struct NOTE
{
	string name, time;
	int number;
};
void qs(struct NOTE *arr, int first, int last)
{
	int x = arr[(first + last) / 2].number,
		i = first, j = last;
	do {
		while (arr[i].number < x) i++;
		while (arr[j].number > x) j--;
		if (i <= j) {
			if (arr[i].number > arr[j].number)
			{
				int t = arr[i].number;
				string str = arr[i].name;
				string st = arr[i].time;
				arr[i].number = arr[j].number;
				arr[i].name = arr[j].name;
				arr[i].time = arr[j].time;
				arr[j].number = t;
				arr[j].name = str;
				arr[j].time = st;
			}
			i++;
			j--;
		}
	} while (i <= j);
	if (first < j) qs(arr, first, j);
	if (last > i) qs(arr, i, last);
}
void print(struct NOTE *arr, int n)
{
	cout << "Фамилия, Имя\tтелефон\tДата рождения\n";
	for (int i(0); i < n; i++)
		cout << arr[i].name << '\t' << arr[i].number << '\t' << arr[i].time << '\n';
	cout << endl;
}

int main(int argc, char *argv[])
{
	setlocale(0, "");
	const int N = 8;
	NOTE man[N];
	for (int i(0); i < N; i++)
	{
		cout << "Фамилия, Имя: ";
		getline(cin, man[i].name);
		cout << "телефон: ";
		cin >> man[i].number;
		cin.get();
		cout << "Дата рождения: ";
		getline(cin, man[i].time);
		system("cls");
	}
	
	print(man, N);
	qs(man, 0, N - 1);
	int n;
	cout << "О Человеке: ";
	cin >> n;
	bool f = 1;
	for (int k = 0; k < N; k++)
		if (man[k].number == n)
		{
			cout << man[k].name << '\t' << man[k].number << '\t' << man[k].time << '\n';
			f = 0;
			break;
		}
	if (f) cout << "Нет такого человека";
	cout << endl;
	print(man, N);
	_getch();
	return 0;
}
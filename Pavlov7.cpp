#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	char word[50] = { '\0' }, str[100] = { '\0' };
	char *buf1 = NULL, *buf2 = NULL;
	bool find = false;
	ifstream fileIn;

	fileIn.open("dict.txt");
	if (!fileIn.is_open())
	{
		cout << "ошибка" << endl;
		exit(1);
	}
	cout << "Словарная база открыта" << endl;
	cout << "Введите слово" << endl;
	cin.getline(word, 50);
	while (!fileIn.eof())
	{
		fileIn.getline(str, 100);
		buf1 = strtok(str, "=");
		buf2 = strtok(NULL, " ");
		if (buf1 == word)
		{
			cout << word << " = " << buf2 << endl;
			find = true;
			break;
		}
		if (buf2 == word)
		{
			cout << word << " = " << buf1 << endl;
			find = true;
			break;
		}

	}
	if (!find)
		cout << "Совпадений не найдено" << endl;

	fileIn.close();
	system("pause");
	return 0;
}
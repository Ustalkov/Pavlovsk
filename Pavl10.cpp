
#include <set>
#include <iostream>
#include <cstdlib>
#include <string>
#include <tchar.h>

using namespace std;

template <class T>
class Set
{
public:
	T ch;
	set <T> cs;


	Set(int n)
	{
		T temp;
		cout << "How much?";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			cs.insert(temp);
		}
	}

	template <class T>Set operator + (Set <T> cs2)
	{
		set <T>::iterator ik;
		for (ik = cs2.cs.begin(); ik != cs2.cs.end(); ++ik)
			cs.insert(*ik);
		return *this;
	}

	template <class T>Set operator + (T ins)
	{
		cs.insert(ins);
		return *this;
	}

	template <class T>bool operator == (Set <T> eq)
	{
		for each(T i in cs)
		{
			for each(T j in eq.cs)
			{
				if (i == j) return true;
				else return false;
			}
		}

	}

	void Print()
	{
		set <T>::iterator ik;
		for (ik = cs.begin(); ik != cs.end(); ++ik)
			cout << *ik << "  ";
		cout << endl;
	}

	~Set()
	{
		cs.clear();
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Set<char>q(1);
	q.Print();
	system("pause");


	Set<char> second(1);
	second.Print();
	q = q + second;
	q.Print();
	system("pause");

	Set<char> set3(1);
	set3.Print();
	system("pause");

	Set<char> another(1);
	another = q + another;
	another.Print();
	system("pause");


	if (q == set3) cout << "True" << endl; else cout << "False" << endl;

	system("pause");
	return 0;
}
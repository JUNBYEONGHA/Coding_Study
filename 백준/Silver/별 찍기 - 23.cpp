#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < 2 * num - 1; i++)
	{
		if (i == 0 || i == 2 * num - 2)
		{
			for (int j = 0; j < num; j++)
			{
				cout << "*";
			}
			for (int j = 0; j < 2 * num - 3; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < num; j++)
			{
				cout << "*";
			}
			cout << endl;
			continue;
		}
		if (i == num - 1)
		{
			for (int j = 0; j < num - 1; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < num - 2; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (int j = 0;  j < num - 2;  j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
			continue;
		}
		for (int j = 0; j < (num - 1) - abs(num - 1 - i); j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < num - 2; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < 2 * abs((num - 1) -  i) - 1; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j < num - 2; j++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
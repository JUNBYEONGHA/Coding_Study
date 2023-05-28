#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * num) - (2 * i) + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < num; i++)
	{
		for (int j = 1; j < num - i ; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i) + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
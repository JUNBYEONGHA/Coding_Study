#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = num; i > 1; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			cout << " ";
		}
		for (int j = num - i; j >= 0; j--)
		{
			cout << "*";
		}
		for (int j = num - i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			cout << " ";
		}
		for (int j = num - i; j >= 0; j--)
		{
			cout << "*";
		}
		for (int j = num - i; j > 0; j--)
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
#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < num ; i++)
	{
		for (int j = 1; j < num - i; j++)
		{
			cout << ' ';
		}
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ' ';
		}
		for (int j = 1; j < num - i; j++)
		{
			cout << '*';
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
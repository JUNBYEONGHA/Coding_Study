#include<iostream>
#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < num * 2; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j < num; j++)
			{
				if (j % 2 == 0)
					cout << ' ';
				else
					cout << '*';
			}
		}
		else
		{
			for (int j = 0; j < num; j++)
			{
				if (j % 2 == 0)
					cout << '*';
				else
					cout << ' ';
			}
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
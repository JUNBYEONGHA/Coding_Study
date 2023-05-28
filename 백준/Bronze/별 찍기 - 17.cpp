#include<iostream>
#define endl "\n"
using namespace std;

char arr[101][101];

void Answer()
{
	int num;
	cin >> num;
	for (int i = num; i > 0; i--)
	{
		for (int j = i-2; j >= 0; j--)
		{
			cout << ' ';
		}
		cout << '*';
		if(i != 1)
			for (int j = 2 * (num - i) - 1; j > 0; j--)
			{
				cout << ' ';	
			}
		else
			for (int j = 2 * (num - i) - 1; j > 0; j--)
			{
				cout << '*';
			}
		if (i < num)
			cout << '*';
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
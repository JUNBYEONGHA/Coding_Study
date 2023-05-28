#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int arr[8];

void Answer()
{
	bool check;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	if (arr[0] > arr[1])
	{
		check = true;
	}
	else
	{
		check = false;
	}
	for (int i = 1; i < 7; i++)
	{
		if (check)
		{
			if (!(arr[i] > arr[i + 1]))
			{
				cout << "mixed";
				return;
			}
		}
		else
		{
			if (!(arr[i] < arr[i + 1]))
			{
				cout << "mixed";
				return;
			}
		}
	}
	if (check)
	{
		cout << "descending";
	}
	else
	{
		cout << "ascending";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
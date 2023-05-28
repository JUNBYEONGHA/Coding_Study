#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int sum = 0;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		sum += arr[i];
	}

	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - (arr[i] + arr[j]) == 100)
			{
				arr[i] = -1;
				arr[j] = -1;
			}
		}
	}
	sort(arr, arr + 9);

	for (int i = 2; i < 9; i++)
		cout << arr[i] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
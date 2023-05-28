#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;
int arr[10001];

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	if (prev_permutation(arr, arr + N))
	{
		for (int i = 0; i < N; i++)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "-1";
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
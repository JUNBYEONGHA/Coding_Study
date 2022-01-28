#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int arr[51];

void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	int MIN = arr[0];
	int MAX = arr[0];
	for (int i = 0; i < N; i++)
	{
		MIN = min(MIN, arr[i]);
		MAX = max(MAX, arr[i]);
	}
	cout << MIN * MAX;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;


int num, black;
int arr[101];

void Input()
{
	cin >> num >> black; 
}
void Solution()
{
	int target, goal, sum = 0;
	int min = 9999999;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num - 2; i++)
		for (int j = i + 1; j < num - 1; j++)
			for (int k = j + 1; k < num; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (black - sum < min && black - sum >= 0) {
					min = black - sum;
					goal = sum;
				}
			}
	cout << goal;
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
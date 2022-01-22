#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
int num;
int arr[500001];
int DP[8001];
void Input()
{
	cin >> num;
	for (register int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	sort(arr, arr + num);
	int sum = 0;
	for (register int i = 0; i < num; i++)
	{
		sum += arr[i];
		DP[arr[i] + 4000]++;	
	}
	int maxcount = 0;
	int index = 0 , value = 0;
	for (register int i = 0; i < 8001; i++)
	{
		if (DP[i] > maxcount)
		{
			maxcount = DP[i];
			index = i;
			value = i - 4000;
		}
	}
	for (register int i = index + 1; i < 8001; i++)
	{
		if (DP[i] == maxcount)
		{
			value = i - 4000;
			break;
		}
	}
	cout << round((float)sum / num) << endl;
	cout << arr[num >> 1] << endl;
	cout << value << endl;
	cout << arr[num-1] - arr[0] << endl;
	
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
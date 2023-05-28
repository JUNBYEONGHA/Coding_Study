#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;
int Data[51][2];
int DP[51];

void Input()
{
	cin >> num;
}
void Solution()
{
	for (int i = 0; i < num; i++)
	{
		DP[i] = 1;
		cin >> Data[i][0] >> Data[i][1];
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (Data[i][0] < Data[j][0] && Data[i][1] < Data[j][1])
			{
				DP[i]++;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << DP[i] << " ";
	}
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
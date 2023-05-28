#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 1001

int N;
int MAP[MAX];
int DP[MAX];

void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> MAP[i];
		DP[i] = 1;
	}
}
void Solution()
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (MAP[j] < MAP[i] && DP[i] < DP[j] + 1)
			{
				DP[i] = DP[j] + 1;
			}
		}
		count = max(count, DP[i]);
	}
	cout << count;
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
#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 101

int N;
int MAP[MAX][MAX];
long long DP[MAX][MAX];

void JUMP(int x, int y)
{
	if (x + MAP[x][y] < N)
		DP[x + MAP[x][y]][y] += DP[x][y];
	if (y + MAP[x][y] < N)
		DP[x][y + MAP[x][y]] += DP[x][y];
}

void Input()
{
	cin >> N ;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> MAP[i][j];
			DP[i][j] = 0;
		}
	}
}
void Solution()
{
	DP[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == N - 1 && j == N - 1)
				cout << DP[N - 1][N - 1];
			else if (DP[i][j] > 0)
				JUMP(i, j);
		}
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
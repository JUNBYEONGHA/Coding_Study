#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<algorithm>
#include<limits>
#define endl "\n"
using namespace std;

int N;
int chess[10][10];
int answer[2];
int l[20];
int r[20];

void DFS(int x , int y , int count , int color)
{
	if (y >= N)
	{
		x++;
		if (y % 2 == 0) y = 1;
		else y = 0;
	}
	if (x >= N)
	{
		answer[color] = max(answer[color], count);
		return;
	}
	if (chess[x][y] && !l[y - x + N - 1] && !r[x + y])
	{
		l[y - x + N - 1] = r[x + y] = 1;
		DFS(x, y + 2, count + 1, color);
		l[y - x + N - 1] = r[x + y] = 0;
	}
	DFS(x, y + 2, count, color);
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> chess[i][j];
		}
	}
	DFS(0, 0, 0, 0);
	DFS(0, 1, 0, 1);

	cout << answer[0] + answer[1]; 
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
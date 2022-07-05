#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

#define INF 102

int game[INF];
int visit[INF];

void BFS() 
{
	queue<int> q;
	q.push(1);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 1; i < 7; i++)
		{
			int y = x + i;
			if (y > 100) continue;
			y = game[y];
			if (visit[y] == -1)
			{
				visit[y] = visit[x] + 1;
				q.push(y);
			}
		}
	}
}

void Answer()
{
	int N, M;
	cin >> N >> M;
	int X, Y;
	for (int i = 1; i < 101; i++)
	{
		game[i] = i;
		visit[i] = -1;
	}
	for (int i = 0; i < N + M; i++)
	{
		cin >> X >> Y;
		game[X] = Y;
	}
	visit[1] = 0;
	BFS();
	cout << visit[100];
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
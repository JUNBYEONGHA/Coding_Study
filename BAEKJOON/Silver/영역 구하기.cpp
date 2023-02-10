#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

#define endl "\n"
using namespace std;

int area[101][101];
int dxy[][2] = { {-1,0},{1,0},{0,-1},{0,1} };
bool visit[101][101];
int M, N, K;

int BFS(int x, int y)
{
	visit[x][y] = true;
	queue<pair<int, int>>q;
	q.push({ x,y });
	int result = 1;
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dxy[i][0];
			int ny = y + dxy[i][1];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (visit[nx][ny]) continue;
			if (area[nx][ny] == 0)
			{
				result++;
				visit[nx][ny] = true;
				q.push({ nx,ny });
			}
		}
	}
	return result;
}

void Answer()
{
	cin >> M >> N >> K;
	int x1, y1, x2, y2;
	for (int k = 0; k < K; k++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++)
		{
			for (int j = x1; j < x2; j++)
			{
				area[i][j] = 1;
				visit[i][j] = true;
			}
		}
	}
	vector<int> answer;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (!visit[i][j] && area[i][j] == 0)
			{
				int result = BFS(i, j);
				answer.push_back(result);
;			}
		}
	}
	sort(answer.begin(), answer.end());
	cout << answer.size() << endl;
	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
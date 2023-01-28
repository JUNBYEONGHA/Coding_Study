#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;
#define MAX 7

int MAP[MAX][MAX];
pair<int, int> pos[MAX];
bool path[MAX][MAX];
int face[MAX];
bool result = true;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,-1,0,1 };

void DFS(int depth, int dir, int y, int x, int first)
{
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		int next = MAP[nexty][nextx];
		if (nexty < 1 || nextx < 1 || nexty > 6 || nextx > 6 || next == 0 || path[first][next])
			continue;
		path[first][next] = true;
		if (dir == -1)
		{
			DFS(1, i, nexty, nextx, first);
		}
		else if (dir == i && depth == 1 
			&& (face[first] == 0 || face[first] == next) 
			&& (face[next] == 0 || face[next] == first))
		{
			face[first] = next;
			face[next] = first;
			DFS(depth + 1, dir, nexty, nextx, first);
		}
		else
		{
			DFS(depth, dir, nexty, nextx, first);
		}
	}
}

void Answer()
{
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cin >> MAP[i][j];
			if (MAP[i][j] > 0)
			{
				pos[MAP[i][j]] = { i , j };
			}
		}
	}
	for (int i = 1; i <= 6; i++)
	{
		int y = pos[i].first;
		int x = pos[i].second;
		if ((y == 0) && (x == 0))
		{
			continue;
		}
		path[i][i] = true;
		DFS(0, -1, y, x, i);
	}
	for (int i = 1; i <= 6; i++)
	{
		if (face[i] == 0)
		{
			result = false;
			break;
		}
	}
	if (result)
	{
		cout << face[1] << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
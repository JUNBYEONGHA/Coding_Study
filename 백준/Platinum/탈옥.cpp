#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

int nxy[][2] = { {0 ,-1},{0 ,1} ,{-1,0},{1,0} };

vector<vector<int>> bfs(vector<vector<char>>& prison, int x, int y)
{
	int n = prison.size();
	int m = prison[0].size();
	vector<vector<int>> prison_map(n, vector<int>(m, -1));
	
	prison_map[x][y] = 0;
	deque<pair<int, int>> q;
	q.push_front({ x,y });
	while (!q.empty())
	{
		int xx = q.front().first;
		int yy = q.front().second;
		q.pop_front();
		for (int i = 0; i < 4; i++)
		{
			int nx = xx + nxy[i][0];
			int ny = yy + nxy[i][1];
			
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (prison[nx][ny] == '*') continue;
			if (prison_map[nx][ny] != -1) continue;
			if (prison[nx][ny] == '#')
			{
				prison_map[nx][ny] = prison_map[xx][yy] + 1;
				q.push_back({ nx, ny });
			}
			else
			{
				prison_map[nx][ny] = prison_map[xx][yy];
				q.push_front({ nx, ny });
			}
		}	
	}
	return prison_map;
}

void Answer()
{
	int T; cin >> T;
	while (T--)
	{
		int h, w, answer = 1e9;
		int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
		cin >> h >> w;
		vector<vector<char>> prison(h + 2, vector<char>(w + 2));
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cin >> prison[i][j];
				if (prison[i][j] == '$' && x1 == 0)
				{
					x1 = i; y1 = j;
				}
				else if (prison[i][j] == '$' && x1 != 0)
				{
					x2 = i; y2 = j;
				}
			}
		}
		vector<vector<int>> d1 = bfs(prison, 0, 0);
		vector<vector<int>> d2 = bfs(prison, x1, y1);
		vector<vector<int>> d3 = bfs(prison, x2, y2);

		int temp;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (prison[i][j] == '*') continue;
				temp = d1[i][j] + d2[i][j] + d3[i][j];
				if (d1[i][j] < 0 || d2[i][j] < 0 || d3[i][j] < 0) continue;
				if (prison[i][j] == '#') temp -= 2;
				answer = min(answer, temp);
			}
		}
		cout << answer << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;


char board[21][21];
bool visit[26];
int R, C;
int result = 0;

void DFS(int x, int y, int cnt)
{
	if (x < 0 || y < 0 || x >= R || y >= C) return;
	if (visit[board[x][y] - 'A'] == true) return;
	cnt++;
	result = max(result, cnt);
	visit[board[x][y] - 'A'] = true;
	DFS(x + 1, y, cnt);
	DFS(x, y + 1, cnt);
	DFS(x - 1, y, cnt);
	DFS(x, y - 1, cnt);
	visit[board[x][y] - 'A'] = false;
}

void Answer()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> board[i][j];
		}
	}
	DFS(0,0,0);
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>

#define endl "\n"
using LL = long long;
using namespace std;

int board[101][101];
int dir[][2] = { {0,1},{1,0},{0,-1},{-1,0} };

void Answer()
{
	int N; cin >> N;
	int K; cin >> K;
	queue<pair<int, char>> move;
	queue<pair<int, int>> snake;
	snake.push({ 1,1 });
	board[1][1] = 2;
	for (int i = 0; i < K; i++)
	{
		int x, y; cin >> x >> y;
		board[x][y] = 1;
	}
	int L; cin >> L;
	for (int i = 0; i < L; i++)
	{
		int time; char dir; cin >> time >> dir;
		move.push({ time,dir });
	}
	int time = 0;
	int sdir = 0;
	int x = snake.front().first;
	int y = snake.front().second;
	while (true)
	{
		x += dir[sdir][0];
		y += dir[sdir][1];
		time++;
		if (x < 1 || y < 1 || x > N || y > N || board[x][y] == 2)
		{
			cout << time;
			break;
		}

		if (board[x][y] == 1)
		{
			snake.push({ x,y });
			board[x][y] = 2;
		}
		else
		{
			snake.push({ x,y });
			board[x][y] = 2;
			board[snake.front().first][snake.front().second] = 0;
			snake.pop();
		}
		if (move.empty()) continue;
		if (move.front().first == time)
		{
			if (move.front().second == 'D')
			{
				sdir = (sdir + 1) % 4;
			}
			else
			{
				sdir = (sdir + 3) % 4;
			}
			move.pop();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

char road[26][26];
int dxy[][2] = { {-1,0},{0,1},{1,0},{0,-1} };
pair<int, int> start, finish;
pair<int, int> lastpipe;
int R, C;

int getdir(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dxy[i][0];
		int ny = y + dxy[i][1];
		if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
		if (road[nx][ny] == '.') continue;
		switch (i)
		{
		case 0: // 위
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '1' ||
				road[nx][ny] == '4')
				return 0;
			break;
		case 1: // 오른쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '3' ||
				road[nx][ny] == '4')
				return 1;
			break;
		case 2: // 아래
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '2' ||
				road[nx][ny] == '3')
				return 2;
			break;
		case 3: // 왼쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '1' ||
				road[nx][ny] == '2')
				return 3;
			break;
		default:
			break;
		}
	}
	return -1;
}
void lastdir()
{
	int lastpipedir = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = lastpipe.first + dxy[i][0];
		int ny = lastpipe.second + dxy[i][1];
		if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
		switch (i)
		{
		case 0: // 위
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '1' ||
				road[nx][ny] == '4')
				lastpipedir += 1;
			break;
		case 1: // 오른쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '3' ||
				road[nx][ny] == '4')
				lastpipedir += 2;
			break;
		case 2: // 아래
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '2' ||
				road[nx][ny] == '3')
				lastpipedir += 4;
			break;
		case 3: // 왼쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+' ||
				road[nx][ny] == '1' ||
				road[nx][ny] == '2')
				lastpipedir += 8;
			break;
		default:
			break;
		}
	}
	char temp = ' ';
	if (lastpipedir == 15) temp = '+';
	else if (lastpipedir == 5) temp = '|';
	else if (lastpipedir == 10) temp = '-';
	else if (lastpipedir == 6) temp = '1';
	else if (lastpipedir == 3) temp = '2';
	else if (lastpipedir == 9) temp = '3';
	else if (lastpipedir == 12) temp = '4';
	cout << lastpipe.first + 1 << " " << lastpipe.second + 1
		<< " " << temp;
}
void findlost()
{
	int x = start.first;
	int y = start.second;
	int dir = getdir(x, y);
	if (dir == -1)
	{
		x = finish.first;
		y = finish.second;
		dir = getdir(x, y);
	}
	queue<pair<int, pair<int, int>>> q;
	q.push({ x,{y,dir} });
	while (!q.empty())
	{
		x = q.front().first;
		y = q.front().second.first;
		dir = q.front().second.second;
		q.pop();

		int nx = x + dxy[dir][0];
		int ny = y + dxy[dir][1];
		int ndir = -1;

		if (road[nx][ny] == '.')
		{
			lastpipe.first = nx;
			lastpipe.second = ny;
			return;
		}

		switch (dir)
		{
		case 0: // 위
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+')
			{
				ndir = 0;
			}
			else if (road[nx][ny] == '1')
			{
				ndir = 1;
			}
			else if (road[nx][ny] == '4')
			{
				ndir = 3;
			}
			break;
		case 1: // 오른쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+')
			{
				ndir = 1;
			}
			else if (road[nx][ny] == '3')
			{
				ndir = 0;
			}
			else if (road[nx][ny] == '4')
			{
				ndir = 2;
			}
			break;
		case 2: // 아래
			if (road[nx][ny] == '|' ||
				road[nx][ny] == '+')
			{
				ndir = 2;
			}
			else if (road[nx][ny] == '2')
			{
				ndir = 1;
			}
			else if (road[nx][ny] == '3')
			{
				ndir = 3;
			}
			break;
		case 3: // 왼쪽
			if (road[nx][ny] == '-' ||
				road[nx][ny] == '+')
			{
				ndir = 3;
			}
			else if (road[nx][ny] == '1')
			{
				ndir = 2;
			}
			else if (road[nx][ny] == '2')
			{
				ndir = 0;
			}
			break;
		default:
			break;
		}

		q.push({ nx,{ny,ndir} });
	}

}

void Answer()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> road[i][j];
			if (road[i][j] == 'Z')
			{
				start.first = i; start.second = j;
			}
			else if (road[i][j] == 'M')
			{
				finish.first = i; finish.second = j;
			}
		}
	}
	findlost();
	lastdir();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
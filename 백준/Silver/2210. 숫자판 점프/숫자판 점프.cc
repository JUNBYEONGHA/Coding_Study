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

int nums[5][5];
int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };
set<int> combi;

void DFS(int x, int y, int num, int cnt)
{
	if (cnt == 6)
	{
		combi.insert(num);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
		DFS(nx, ny, num * 10 + nums[nx][ny], cnt + 1);
	}
}

void Answer()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> nums[i][j];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			DFS(i, j, 0, 0);
		}
	}
	cout << combi.size();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
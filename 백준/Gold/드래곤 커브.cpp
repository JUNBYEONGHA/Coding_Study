#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

int N, x, y, d, g;
int DRAGONMAP[101][101];

int dx[] = { 0,-1,0,1 };
int dy[] = { 1,0,-1,0 };
vector<int> Direction;

void DragonCurve()
{
	int S = Direction.size();
	for (int i = S - 1; i >= 0; i--)
	{
		int nD = (Direction[i] + 1) % 4;
		x = x + dx[nD];
		y = y + dy[nD];
		DRAGONMAP[x][y] = 1;

		Direction.push_back(nD);
	}
}
void DragonCheck()
{
	int count = 0;
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			if (DRAGONMAP[i][j] == 1 && DRAGONMAP[i + 1][j] == 1 &&
				DRAGONMAP[i][j + 1] == 1 && DRAGONMAP[i + 1][j + 1] == 1)
			{
				count++;
			}
		}
	}
	cout << count;
}
void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> y >> x >> d >> g;

		Direction.clear();
		
		DRAGONMAP[x][y] = 1;
		x = x + dx[d];
		y = y + dy[d];
		DRAGONMAP[x][y] = 1;

		Direction.push_back(d);
		for (int j = 0; j < g; j++)
		{
			DragonCurve();
		}
	}
	DragonCheck();
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
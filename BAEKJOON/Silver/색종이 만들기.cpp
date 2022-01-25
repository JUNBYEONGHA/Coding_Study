#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int NUM;
char MAP[129][129];
int blue = 0, white = 0;

void DFS(int x, int y , int size)
{
	bool zero, one;
	zero = one = true;
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (MAP[i][j] == '0') one = false;
			if (MAP[i][j] == '1') zero = false;
		}
	}

	if (zero == true)
	{
		white++;
		return;
	}
	else if (one == true)
	{
		blue++;
		return;
	}

	DFS(x, y, size / 2);
	DFS(x, y + size / 2, size / 2);
	DFS(x + size / 2, y, size / 2);
	DFS(x + size / 2, y + size / 2, size / 2);
}

void Input()
{
	cin >> NUM;
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j < NUM; j++)
		{
			cin >> MAP[i][j];
		}
	}
}
void Solution()
{
	DFS(0, 0, NUM);
	cout << white << " " << blue;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
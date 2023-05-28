#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;
int map[3][3];
int tictectoc(int x)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (map[i][j] != x)break;
			if (j == 2)return x;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[j][i] != x)break;
			if (j == 2)return x;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (map[i][i] != x)break;
		if (i == 2)return x;
	}
	for (int i = 0; i < 3; i++)
	{
		if (map[i][2 - i] != x)break;
		if (i == 2)return x;
	}
	return 0;
}

void Answer()
{
	int num;
	cin >> num;
	int x, y;
	int value;
	int ans = 0;
	bool check = false;
	for (int i = 0; i < 9; i++)
	{
		if (i % 2 == 0)value = num;
		else
		{
			if (num == 2)value = 1;
			else value = 2;
		}
		cin >> x >> y;
		x--, y--;
		map[x][y] = value;
		if (!check)
		{
			ans = tictectoc(value);
			if (ans != 0)check = true;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
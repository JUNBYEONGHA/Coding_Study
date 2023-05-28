#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int NUM;
char MAP[65][65];
string answer = "";

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
		answer += "0";
		return;
	}
	else if (one == true)
	{
		answer += "1";
		return;
	}
	else
	{
		answer += "(";
	}

	DFS(x, y, size / 2);
	DFS(x, y + size / 2, size / 2);
	DFS(x + size / 2, y, size / 2);
	DFS(x + size / 2, y + size / 2, size / 2);
	
	answer += ")";
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
	cout << answer;
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
#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int MAP[9][9];
bool Row[9][9];
bool Col[9][9];
bool Square[9][9];
void Input()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> MAP[i][j];
			if (MAP[i][j] != 0)
			{
				Row[i][MAP[i][j]] = true;
				Col[j][MAP[i][j]] = true;
				Square[(i / 3) * 3 + (j / 3)][MAP[i][j]] = true;
			}
		}
	}
}
void Print()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << MAP[i][j] << " ";
		}
		cout << endl;
	}
}
void DFS(int Cnt)
{
	int x = Cnt / 9;
	int y = Cnt % 9;

	if (Cnt == 81)
	{
		Print();
		exit(0);
	}

	if (MAP[x][y] == 0)
	{
		for (int i = 1; i <= 9; i++)
		{
			if (Row[x][i] == false && Col[y][i] == false
				&& Square[(x / 3) * 3 + (y / 3)][i] == false)
			{
				Row[x][i] = true;
				Col[y][i] = true;
				Square[(x / 3) * 3 + (y / 3)][i] = true;
				MAP[x][y] = i;
				DFS(Cnt + 1);
				MAP[x][y] = 0;
				Row[x][i] = false;
				Col[y][i] = false;
				Square[(x / 3) * 3 + (y / 3)][i] = false;
			}
		}
	}
	else DFS(Cnt + 1);
}
void Solution()
{
	DFS(0);
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
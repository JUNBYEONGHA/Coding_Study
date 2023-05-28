#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <string>
#include <cmath>

#define endl "\n"
using namespace std;

int sudoku[10][10];
bool domino[10][10];
int dxy[][2] = { { 1, 0} , {0, 1} };

bool check(int x, int y, int n)
{
	int row = 0;
	int col = 0;
	for (; row < 9; row++)
	{
		if (sudoku[row][y] == n) return false;
	}
	for (; col < 9; col++)
	{
		if (sudoku[x][col] == n) return false;
	}
	row = (x / 3) * 3;
	col = (y / 3) * 3;

	for (int i = row; i < row + 3; i++)
	{
		for (int j = col; j < col + 3; j++)
		{
			if (sudoku[i][j] == n) return false;
		}
	}
	return true;
}

bool playsudoku(int play)
{
	if (play == 81) return true;

	int x = play % 9;
	int y = play / 9;

	if (sudoku[x][y] == 0)
	{
		for (int k = 0; k < 2;  k++)
		{
			int nx = x + dxy[k][0];
			int ny = y + dxy[k][1];

			if (nx < 0 || ny < 0 || ny >= 9 || nx >= 9 || sudoku[nx][ny] != 0) continue;
			
			for (int i = 1; i <= 9; i++)
			{
				for (int j = 0; j <= 9; j++)
				{
					if (i == j || domino[i][j]) continue;

					if (check(x, y, i) && check(nx, ny, j))
					{
						sudoku[x][y] = i;
						sudoku[nx][ny] = j;

						domino[i][j] = true;
						domino[j][i] = true;

						if (playsudoku(play + 1)) return true;

						domino[i][j] = false;
						domino[j][i] = false;

						sudoku[x][y] = 0;
						sudoku[nx][ny] = 0;
					}
				}
			}
		}
	}
	else
	{
		return playsudoku(play + 1);
	}
	return false;
}

void Answer()
{
	int t = 1;
	while (true)
	{
		int N; cin >> N;
		if (N == 0) break;
		memset(sudoku, 0, sizeof(sudoku));
		memset(domino, false, sizeof(domino));
		cout << "Puzzle " << t << endl;
		for (int i = 0; i < N; i++)
		{
			int U, V;
			string LU, LV;
			cin >> U >> LU >> V >> LV;
			sudoku[LU[0] - 'A'][LU[1] - '1'] = U;
			sudoku[LV[0] - 'A'][LV[1] - '1'] = V;

			domino[U][V] = true;
			domino[V][U] = true;
		}
		for (int i = 1; i <= 9; i++)
		{
			string s; cin >> s;
			sudoku[s[0] - 'A'][s[1] - '1'] = i;
		}
		playsudoku(0);
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << sudoku[i][j];
			}
			cout << endl;
		}
		t++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#define endl "\n"
using namespace std;

char map[3072][6143];

void draw(int row, int col)
{
	map[row][col] = '*';

	map[row + 1][col - 1] = '*';
	map[row + 1][col + 1] = '*';

	for (int i = 0; i < 5; i++)
	{
		map[row + 2][col - 2 + i] = '*';
	}
}

void triangle(int len , int row, int col)
{
	if (len == 3)
	{
		draw(row, col);
		return;
	}
	triangle(len / 2, row, col);
	triangle(len / 2, row + len / 2, col - len / 2);
	triangle(len / 2, row + len / 2, col + len / 2);
}

void Answer()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 2 * num - 1; j++)
		{
			map[i][j] = ' ';
		}
	}
	triangle(num, 0, num - 1);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < 2 * num - 1; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
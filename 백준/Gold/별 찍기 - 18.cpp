#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

char arr[1023][2045];

void Draw(int len, int startRow, int startCol , int rowNum , int colNum)
{
	if (len % 2)
	{
		for (int i = 0; i < rowNum; i++)
		{
			if (i == 0)
			{
				for (int j = 0; j < colNum; j++)
				{
					arr[startRow][startCol + j] = '*';
				}
			}
			else if (i == rowNum - 1)
			{
				arr[startRow - i][startCol + rowNum - 1] = '*';
			}
			else
			{
				arr[startRow - i][startCol + i] = '*';
				arr[startRow - i][startCol + colNum - i - 1] = '*';
			}
		}
	}
	else
	{
		for (int i = 0; i < rowNum; i++)
		{
			if (i == 0)
			{
				for (int j = 0; j < colNum; j++)
				{
					arr[startRow][startCol + j] = '*';
				}
			}
			else if (i == rowNum - 1)
			{
				arr[startRow + i][startCol + rowNum - 1] = '*';
			}
			else
			{
				arr[startRow + i][startCol + i] = '*';
				arr[startRow + i][startCol + colNum - i - 1] = '*';
			}
		}
	}
}

void triangle(int len, int startRow, int startCol)
{
	int rowNum = pow(2, len) - 1;
	int colNum = pow(2, len + 1) - 3;

	Draw(len, startRow, startCol, rowNum, colNum);

	if (len == 1)
		return;
	if (len % 2)
		triangle(len - 1, startRow - rowNum / 2, startCol + rowNum / 2 + 1);
	else
		triangle(len - 1, startRow + rowNum / 2, startCol + rowNum / 2 + 1);
}

void Answer()
{
	int N;
	cin >> N;

	int rowNum = pow(2, N) - 1;
	int colNum = pow(2, N + 1) - 3;
	
	for (int i = 0; i < rowNum; i++)
	{
		for (int j = 0; j < colNum; j++)
		{
			arr[i][j] = ' ';
		}
	}

	if (N % 2)
		triangle(N, rowNum - 1, 0);
	else
		triangle(N, 0, 0);

	for (int i = 0; i < rowNum; i++)
	{
		if (N % 2)
		{
			for (int j = 0; j < rowNum + i; j++)
			{
				cout << arr[i][j];
			}
		}
		else
		{
			for (int j = 0; j < colNum - i; j++)
			{
				cout << arr[i][j];
			}
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
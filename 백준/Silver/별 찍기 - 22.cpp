#include<iostream>
#define endl "\n"
using namespace std;

char arr[400][397];

void draw(int num,int len,int start,int end)
{
	if (num == 1) return;
	for (int i = start; i < len; i++)
	{
		arr[start][i] = '*';
	}
	for (int i = start; i < end; i++)
	{
		arr[i][start] = '*';
	}
	for (int i = start; i < len; i++)
	{
		arr[end - 1][i] = '*';
	}
	for (int i = start + 2; i < end; i++)
	{
		arr[i][end - 3] = '*';
	}
	arr[start + 2][end - 4] = '*';
	num--;
	draw(num, len - 2, start + 2, end - 2);
}

void Answer()
{
	int num;
	cin >> num;
	int len = 4 * (num - 1) + 1;
	for (int i = 0; i < len + 2; i++)
	{
		for (int j = 0; j < len; j++)
		{
			arr[i][j] = ' ';
		}
	}
	if (num == 1)
	{
		cout << "*";
	}
	else
	{
		int temp = len / 2;
		for (int i = 0; i < 3; i++)
		{
			arr[temp + i][temp] = '*';
		}
		draw(num, len, 0, len + 2);
		for (int j = 0; j < len; j++)
		{
			cout << arr[0][j];
		}
		cout << endl;
		cout << arr[1][0] << endl;
		for (int i = 2; i < len + 2; i++)
		{
			for (int j = 0; j < len; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
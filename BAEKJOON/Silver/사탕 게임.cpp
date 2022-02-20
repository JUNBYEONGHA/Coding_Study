#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
char board[51][51];
int answer = 0;
void change(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}

void check()
{
	char temp;
	for (int i = 0; i < N; i++)
	{
		int count = 1;
		temp = board[i][0];
		for (int j = 1; j < N; j++)
		{
			if (board[i][j] == temp) count++;
			else count = 1;
			temp = board[i][j];
			if (count > answer) answer = count;
		}
	}
	for (int i = 0; i < N; i++)
	{
		int count = 1;
		temp = board[0][i];
		for (int j = 1; j < N; j++)
		{
			if (board[j][i] == temp) count++;
			else count = 1;
			temp = board[j][i];
			if (count > answer) answer = count;
		}
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> board[i][j];
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++)
		{
			change(board[i][j], board[i][j + 1]);
			check();
			change(board[i][j], board[i][j + 1]);
		}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N - 1; j++)
		{
			change(board[j][i], board[j + 1][i]);
			check();
			change(board[j][i], board[j + 1][i]);
		}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
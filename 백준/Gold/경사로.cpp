#include<iostream>
#define endl "\n"
using namespace std;

int map[201][101];
int N, L;
int answer, c;

void Answer()
{
	cin >> N >> L;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			map[i + N][j] = map[j][i];
		}
	}
	for (int i = 0; i < N * 2; i++)
	{
		c = 1;
		int j;
		for (j = 0; j < N - 1; j++)
		{
			if (map[i][j] == map[i][j + 1]) c++;
			else if (map[i][j] + 1 == map[i][j + 1] && c >= L) c = 1;
			else if (map[i][j] - 1 == map[i][j + 1] && c >= 0) c = -L + 1;
			else break;
		}
		if (j == N - 1 && c >= 0) answer++;
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
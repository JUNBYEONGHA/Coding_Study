#include <iostream>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

int paper[101][101];

void Answer()
{
	int N;
	cin >> N;
	while (N--)
	{
		int x, y;
		cin >> x >> y;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				paper[i + x][j + y] = 1;
			}
		}
	}
	int answer = 0;
	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (paper[i][j] == 1)
			{
				answer++;
			}
		}
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}

#include <iostream>
#include <algorithm>
#include <string>

#define endl "\n"
using namespace std;

char fishbread[11][11];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> fishbread[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = M - 1; j >= 0; j--)
		{
			cout << fishbread[i][j];
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
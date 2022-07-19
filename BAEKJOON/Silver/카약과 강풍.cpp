#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

int team[12];

void Answer()
{
	int N, S, R;
	cin >> N >> S >> R;
	int result = 0;
	int a;
	for (int i = 0; i < S; i++)
	{
		cin >> a;
		team[a]--;
	}
	for (int i = 0; i < R; i++)
	{
		cin >> a;
		team[a]++;
	}
	for (int i = 1; i <= N ; i++)
	{
		if (team[i] == -1)
		{
			if (team[i - 1] == 1)
			{
				team[i]++;
				team[i - 1]--;
			}
			else if (team[i + 1] == 1)
			{
				team[i]++;
				team[i + 1]--;
			}
		}
	}
	for (int i = 1; i <= N ; i++)
	{
		if (team[i] == -1)	result++;
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
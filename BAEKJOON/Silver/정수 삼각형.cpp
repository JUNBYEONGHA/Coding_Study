#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;
int piramid[501][501];
int N;
void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> piramid[i][j];
		}
	}
}
void Solution()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j != 0 || j != i)
			{
				piramid[i][j] += max(piramid[i - 1][j - 1]
					, piramid[i - 1][j]);
			}
			else if(j == 0)
			{
				piramid[i][j] += piramid[i - 1][j];
			}
			else
			{
				piramid[i][j] += piramid[i - 1][j - 1];
			}
		}
	}
	int MAX = 0;
	for (auto A : piramid[N - 1])
	{
		MAX = max(MAX, A);
	}
	cout << MAX;
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
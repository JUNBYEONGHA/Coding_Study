#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

int paper[1010][1010];

void Answer()
{
	int N;
	cin >> N;
	for (int k = 1; k <= N; k++)
	{
		int x, y, w, h;
		cin >> y >> x >> w >> h;
		for (int i = x; i < x + h; i++)
		{
			for (int j = y; j < y + w; j++)
			{
				paper[i][j] = k;
			}
		}
	}
	for (int k = 1; k <= N; k++)
	{
		int result = 0;
		for (int i = 0; i <= 1001; i++)
		{
			for (int j = 0; j <= 1001; j++)
			{
				if (paper[i][j] == k)
				{
					result++;
				}
			}
		}
		cout << result << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
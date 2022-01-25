#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int chess[15];
int N, total = 0;

bool check(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (chess[i] == chess[n] || abs(chess[n] - chess[i]) == n - i)
			return false;
	}
	return true;
}
void nqueen(int x)
{
	if (x == N)
		total++;
	else
	{
		for (int i = 0; i < N; i++)
		{
			chess[x] = i;
			if (check(x))
				nqueen(x + 1);
		}
	}
}

void Input()
{
	cin >> N;
}
void Solution()
{
	nqueen(0);
	cout << total;
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
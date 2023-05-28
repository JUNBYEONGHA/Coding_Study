#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int dp[102];
vector<pair<int, int>> line;

void Input()
{
	cin >> N;
	int A, B;
	line.emplace_back(0, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		line.emplace_back(A,B);
	}
}
void Solution()
{
	sort(line.begin(), line.end());
	int result = 0;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (line[i].second > line[j].second)
			{
				if (dp[j] >= dp[i])
					dp[i] = dp[j] + 1;
			}
		}
		result = max(result, dp[i]);
	}
	cout << N - result;
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
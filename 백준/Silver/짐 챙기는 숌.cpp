#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N, M;
	cin >> N >> M;
	int result = 0, sum = 0;
	int a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		sum += a;
		if (sum == M)
		{
			sum = 0;
			result++;
		}
		else if (sum > M)
		{
			sum = a;
			result++;
		}
	}
	if (sum > 0)
	{
		result++;
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
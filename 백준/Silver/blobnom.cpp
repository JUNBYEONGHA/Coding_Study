#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	unsigned int result = 0;
	cin >> N;
	vector<unsigned int> top(N);
	for (int i = 0; i < N; i++)
	{
		cin >> top[i];
		result = max(result, top[i]);
	}
	for (int i = 1; i < N - 1; i++)
	{
		int MIN = min(top[i - 1], top[i + 1]);
		if (MIN > 0 && top[i] > 0)
			result = max (result, top[i] + MIN);
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, K, answer = 0;
	string burgar;

	cin >> N >> K;
	cin >> burgar;

	for (int i = 0; i < N; i++)
	{
		if (burgar[i] != 'H') continue;

		for (int j = i - K; j <= i + K; j++)
		{
			if (j < 0 || j >= N) continue;
			if (burgar[j] == 'P')
			{
				burgar[j] = '_';
				burgar[i] = '_';
				answer++;
				break;
			}
		}
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
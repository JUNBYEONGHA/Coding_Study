#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

vector<vector<int>> card;

void Answer()
{
	int N, M;
	cin >> N >> M;
	vector<int> result(N);
	for (int i = 0; i < N; i++)
	{
		vector<int> player(M);
		for (int j = 0; j < M; j++)
		{
			cin >> player[j];
		}
		sort(player.begin(), player.end());
		card.push_back(player);
	}
	for (int i = 0; i < M; i++)
	{
		int cardmax = 0;
		for (int j = 0; j < N; j++)
		{
			cardmax = max(cardmax, card[j][i]);
		}
		for (int j = 0; j < N; j++)
		{
			if (cardmax == card[j][i])
			{
				result[j]++;
			}
		}
	}
	int playermax = 0;
	for (int i = 0; i < N; i++)
	{
		playermax = max(playermax, result[i]);
	}
	for (int i = 0; i < N; i++)
	{
		if (playermax == result[i])
		{
			cout << i + 1 << " ";
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
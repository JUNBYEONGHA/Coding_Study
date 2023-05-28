#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int N, M;
	cin >> N >> M;
	vector<int> card(N + 1);
	for (int i = 1; i <= N; i++)
	{
		cin >> card[i];
	}
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j < N; j++)
		{
			if (card[j] % i > card[j + 1] % i)
			{
				swap(card[j], card[j + 1]);
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << card[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
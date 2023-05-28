#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>

#define endl "\n"
using LL = long long;
using namespace std;

#define INF 100000000

void Answer()
{
	vector<vector<int>> table(101, vector<int>(101, INF));
	int N, K; cin >> N >> K;
	for (int i = 0; i < K; i++)
	{
		int A, B; cin >> A >> B;
		table[A][B] = 1;
		table[B][A] = 1;
	}
	for (int p = 1; p <= N; p++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (table[i][p] + table[p][j] < table[i][j])
				{
					table[i][j] = table[i][p] + table[p][j];
				}
			}
		}
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (table[i][j] > 6)
			{
				cout << "Big World!";
				return;
			}
		}
	}
	cout << "Small World!";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
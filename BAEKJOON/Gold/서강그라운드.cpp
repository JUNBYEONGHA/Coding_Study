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
	vector<int> item(101,0);
	int N, M, R; cin >> N >> M >> R;
	for (int i = 1; i <= N; i++)
	{
		cin >> item[i];
	}
	for (int i = 0; i < R; i++)
	{
		int A, B, L; cin >> A >> B >> L;
		table[A][B] = L;
		table[B][A] = L;
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
	int result = 0;
	for (int i = 1; i <= N ; i++)
	{
		int cnt = item[i];
		for (int j = 1; j <= N; j++)
		{
			if (i != j && table[i][j] <= M)
			{
				cnt += item[j];
			}
		}
		result = max(result, cnt);
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
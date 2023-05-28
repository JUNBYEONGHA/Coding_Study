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
	vector<vector<int>> table(401, vector<int>(401, 0));
	int N, M; cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int A, B; cin >> A >> B;
		table[A][B] = -1;
		table[B][A] = 1;
	}
	for (int p = 1; p <= N; p++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (table[i][j] == 0)
				{
					if (table[i][p] == 1 && table[p][j] == 1)
					{
						table[i][j] = 1;
					}
					else if (table[i][p] == -1 && table[p][j] == -1)
					{
						table[i][j] = -1;
					}
				}
			}
		}
	}
	int S; cin >> S;
	for (int i = 0; i < S; i++)
	{
		int A, B; cin >> A >> B;
		cout << table[A][B] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
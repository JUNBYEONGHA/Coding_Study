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
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

int parent[10001];
bool visit[10001];
int T, N, A, B, u, v;

void Answer()
{
	cin >> T;

	while (T--)
	{
		cin >> N;

		// 초기화
		for (int i = 1; i <= N; i++)
		{
			visit[i] = false;
			parent[i] = i;
		}

		// 간선정보 입력
		for (int i = 0; i < N - 1; i++)
		{
			cin >> A >> B;
			parent[B] = A;
		}

		// LCA 찾기
		cin >> u >> v;
		visit[u] = true;

		while (u != parent[u])
		{
			u = parent[u];
			visit[u] = true;
		}
		while (true)
		{
			if (visit[v])
			{
				cout << v << endl;
				break;
			}
			v = parent[v];
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
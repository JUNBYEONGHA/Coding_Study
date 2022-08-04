#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

int n, m, u, v;
int answer, cnt;
bool visit[501];
vector<int> V[501];

bool DFS(int x, int post)
{
	visit[x] = true;
	for (int i = 0; i < V[x].size(); i++)
	{
		if (V[x][i] == post) continue;
		if (visit[V[x][i]]) return false;
		if (!DFS(V[x][i], x)) return false;
	}
	return true;
}

void Answer()
{
	while (true)
	{
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		cnt++;
		answer = 0;
		for (int i = 1; i <= 500; i++)
		{
			V[i].clear();
			visit[i] = false;
		}
		for (int i = 0; i < m; i++)
		{
			cin >> u >> v;
			V[u].push_back(v);
			V[v].push_back(u);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i])
				if (DFS(i, 0))
					answer++;
		}

		cout << "Case " << cnt << ": ";
		if (answer > 1)
			cout << "A forest of " << answer << " trees." << endl;
		else if (answer == 1)
			cout << "There is one tree." << endl;
		else if (answer == 0)
			cout << "No trees." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 20001

int color[MAX];

void DFS(int k, int coloing, const vector<int> vertex[])
{
	color[k] = coloing;
	for (int i = 0; i < vertex[k].size(); i++)
	{
		int next = vertex[k][i];
		if (color[next] == 0)
		{
			DFS(next, 3 - coloing, vertex);
		}
	}
}
bool isBigraph(int v, const vector<int> vertex[])
{
	for (int i = 1; i <= v ; i++)
	{
		for (int j = 0; j < vertex[i].size(); j++)
		{
			int next = vertex[i][j];
			if (color[i] == color[next]) return false;
		}
	}
	return true;
}

void Answer()
{
	int t, v, e;
	cin >> t;
	while (t--)
	{
		memset(color, 0, sizeof(color));
		vector<int> vertex[MAX];
		cin >> v >> e;
		for (int i = 0; i < e; i++)
		{
			int a, b;
			cin >> a >> b;
			vertex[a].push_back(b);
			vertex[b].push_back(a);
		}
		for (int i = 1; i <= v; i++)
		{
			if (color[i] == 0)
				DFS(i, 1, vertex);
		}
		if (isBigraph(v, vertex)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

int n, m;
int parent[500000];
int ans;
int find(int u)
{
	if (parent[u] == u) return u;
	else return parent[u] = find(parent[u]);
}

bool union_node(int u, int v)
{
	u = find(u);
	v = find(v);

	// �θ��尡 ������ ����Ŭ�� ����Ƿ� true ��ȯ
	if (u == v) return true;
	else // ��� ����
	{
		parent[u] = v;
		return false;
	}
}

void Answer()
{
	int u, v;
	cin >> n >> m;

	// �ڱ� �ڽ��� �θ�� ����
	for (int i = 0; i < n; i++)
		parent[i] = i;

	// Union Find
	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;
		if (union_node(u, v))
		{
			ans = i;
			break;
		}
	}

	if (ans == 0) cout << 0;
	else cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
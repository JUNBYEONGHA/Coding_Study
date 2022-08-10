#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

int p[201], parent[201];
int N, M;
int Find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v) {
    u = Find(u), v = Find(v);
    if (u == v) return;
    parent[u] = v;
    Find(u);
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i <= 200; i++) parent[i] = i;
	for (int tmp, i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> tmp;
			if (tmp == 1) Union(i, j);
		}
	}
	int past, here;
	bool canTrip = true;
	cin >> past;
	for (int i = 1; i < M; i++) {
		cin >> here;
		if (!canTrip) continue;
		if (Find(past) != Find(here)) canTrip = false;
		past = here;
	}
	if (canTrip) cout << "YES";
	else cout << "NO";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node) {
	check[node] = true;
	for (int i = 0; i < a[node].size(); i++) {
		int next = a[node][i];
		if (!check[next]) {
			dfs(next);
		}
	}
}
void Answer()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {		// ����� ���� �ʱ�ȭ
			a[i].clear();
			check[i] = false;
		}
		for (int i = 1; i <= n; i++) {		// ���� �׷��� �Է�
			int v;
			cin >> v;
			a[i].push_back(v);
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {		// �� Ž������ count + 1
			if (!check[i]) {
				dfs(i);
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
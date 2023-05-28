#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define endl "\n"
using namespace std;

int n, k, leaf = 0, root;
vector<int> tree[51];

int dfs(int node) {
	if (node == k) return -1;
	if (!tree[node].size()) {
		leaf++;
		return 0;
	}
	for (int i = 0; i < tree[node].size(); i++) {
		int tmp = dfs(tree[node][i]);
		if (tmp == -1 && tree[node].size() == 1)
			leaf++;
	}
	return 0;
}

void Answer()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t1;
		cin >> t1;
		if (t1 == -1)
			root = i;
		else
			tree[t1].push_back(i);
	}
	cin >> k;
	dfs(root);
	cout << leaf;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

map<string, int> m;
int parent[200001];
int friend_num[200001];

int find_parent(int x) {
	if (parent[x] == x) return x;
	return parent[x] = find_parent(parent[x]);
}

void make_union(int a, int b) {
	a = find_parent(a);
	b = find_parent(b);
	if (a < b) {
		parent[b] = a;
		friend_num[a] += friend_num[b];
	}
	else if (a > b) {
		parent[a] = b;
		friend_num[b] += friend_num[a];
	}
}


void Answer()
{
	int test, cnt, num;
	string str1, str2;
	map<string, int> ::iterator it;
	cin >> test;
	for (int t = 0; t < test; t++) {
		m.clear();
		cnt = 0;
		for (int i = 0; i < 200001; i++) {
			parent[i] = i;
			friend_num[i] = 1;
		}

		cin >> num;
		int a, b;
		for (int i = 0; i < num; i++) {
			cin >> str1 >> str2;
			it = m.find(str1);
			if (it == m.end()) {
				m[str1] = ++cnt;
				a = cnt;
			}
			else a = it->second;

			it = m.find(str2);
			if (it == m.end()) {
				m[str2] = ++cnt;
				b = cnt;
			}
			else b = it->second;
			make_union(a, b);
			int root = find_parent(a);
			cout << friend_num[root] << endl;
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
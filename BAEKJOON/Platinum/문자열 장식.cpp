#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

struct comp {
	bool operator() (string& s1, string& s2) {
		return (s1 + s2 > s2 + s1);
	}
};

void Answer()
{
	int N;
	cin >> N;
	priority_queue<string, vector<string>, comp> pq;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		pq.push(s);
	}
	while (!pq.empty()) {
		string cur = pq.top(); pq.pop();
		cout << cur[0];
		int curlen = cur.length();
		if (curlen > 1) pq.push(cur.substr(1, curlen - 1));
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
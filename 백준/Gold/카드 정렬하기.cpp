#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++)
	{
		int n; cin >> n;
		pq.push(n);
	}
	int sum = 0;
	while (pq.size() > 1) {
		int n1, n2;

		n1 = pq.top(), pq.pop();
		n2 = pq.top(), pq.pop();
		sum += (n1 + n2);
		pq.push(n1 + n2);
	}
	cout << sum
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
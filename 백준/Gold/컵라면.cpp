#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n; cin >> n;
	vector<pair<int,int>>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	sort(arr.begin(), arr.end());

	priority_queue<int, vector<int>, greater<int>>pq;
	for (int i = 0; i < n; i++) {
		if (pq.size() < arr[i].first) {
			pq.push(arr[i].second);
		}
		else {
			if (pq.top() < arr[i].second) {
				pq.pop();
				pq.push(arr[i].second);
			}
		}
	}
	int sum = 0;
	while (!pq.empty()) {
		sum += pq.top();
		pq.pop();
	}
	cout << sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
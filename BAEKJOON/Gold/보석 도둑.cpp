#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;
	vector<int> bag(k);
	for (int i = 0; i < k; i++)
		cin >> bag[i];
	sort(arr.begin(), arr.end());
	sort(bag.begin(), bag.end());

	priority_queue<int, vector<int>, less<int>>pq;
	int index = 0;
	long long answer = 0;
	for (int i = 0; i < k; i++) {
		while (index < n && bag[i] >= arr[index].first)
		{
			pq.push(arr[index].second);
			index++;
		}
		if (!pq.empty())
		{
			answer += pq.top();
			pq.pop();
		}
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
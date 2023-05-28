#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

vector<long long> arr , tree;

long long init(long long start, long long end, long long node)
{
	if (start == end) return tree[node] = arr[start];
	long long mid = (start + end) / 2;
	return tree[node] = init(start, mid, node * 2) +
		init(mid + 1, end, node * 2 + 1);
}

long long sum(long long start, long long end, long long node, long long left, long long right)
{
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree[node];
	long long mid = (start + end) / 2;
	return sum(start, mid, node * 2, left, right) +
		sum(mid + 1, end, node * 2 + 1,left,right);
}

void update(long long start, long long end, long long node, long long index, long long dif)
{
	if (index < start || index > end) return;
	tree[node] += dif;
	if (start == end) return;
	long long mid = (start + end) / 2;
	update(start, mid, node * 2, index,  dif);
	update(mid + 1, end, node * 2 + 1, index, dif);
}

void Answer()
{
	long long N, M, K, A ,B ,C, answer = -100000000;
	cin >> N >> M;
	arr.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	tree.resize(N * 4);
	init(0, N - 1, 1);
	for (int i = 0; i <= N - M; i++)
	{
		answer = max(answer,sum(0, N - 1, 1, i, i+(M-1)));
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
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
	long long N, M, K, A ,B ,C;
	cin >> N >> M >>K;
	arr.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	tree.resize(N * 4);
	init(0, N - 1, 1);
	for (int i = 0; i < M + K; i++)
	{
		cin >> A;
		if (A == 1)
		{
			cin >> B >> C;
			update(0, N - 1,1, B - 1, C - arr[B - 1]);
			arr[B - 1] = C;
		}
		else
		{
			cin >> B >> C;
			cout << sum(0, N - 1, 1, B - 1, C - 1) << endl;
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
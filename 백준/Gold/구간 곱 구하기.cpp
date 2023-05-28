#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

#define DIV 1000000007;
vector<LL> arr;
vector<LL> tree;
int N, M, K;

LL init(int node, int start, int end)
{
	if (start == end) return tree[node] = arr[start];
	int mid = (start + end) / 2;
	return tree[node] = (init(node * 2, start, mid)
		* init(node * 2 + 1, mid + 1, end)) % DIV;
}
LL mul(int node, int start, int end, int left, int right)
{
	if (left > end || right < start) return 1;
	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return (mul(node * 2, start, mid, left, right)
		* mul(node * 2 + 1, mid + 1, end, left, right)) % DIV;
}
void update(int node, int start, int end, int index, LL value)
{
	if (index < start || index > end) return;
	if (start == end)
	{
		tree[node] = value;
		return;
	}
	int mid = (start + end) / 2;
	update(node * 2, start, mid, index, value);
	update(node * 2 + 1, mid + 1, end, index, value);
	tree[node] = (tree[node * 2] * tree[node * 2 + 1]) % DIV;
}


void Answer()
{
	cin >> N >> M >> K;
	arr  = vector<LL>(N + 1);
	tree = vector<LL>(N * 4);
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	init(1, 1, N);

	for (int i = 0; i < M + K; i++)
	{
		LL a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
		{
			update(1, 1, N, b, c);
		}
		else
		{
			cout << mul(1, 1, N, b, c) << endl;
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
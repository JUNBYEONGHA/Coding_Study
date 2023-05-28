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

vector<LL> arr;
vector<LL> tree;
int N,Q;

LL init(int node, int start, int end)
{
	if (start == end) return tree[node] = arr[start];
	int mid = (start + end) / 2;
	return tree[node] = (init(node * 2, start, mid)
		+ init(node * 2 + 1, mid + 1, end));
}
LL getnumber(int node, int start, int end, int left, int right)
{
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return tree[node];
	int mid = (start + end) / 2;
	return getnumber(node * 2, start, mid, left, right)
		+ getnumber(node * 2 + 1, mid + 1, end, left, right);

}
void update(int node, int start, int end, int index, LL dif)
{
	if (index < start || index > end) return;
	tree[node] += dif;
	if (start == end) return;
	int mid = (start + end) / 2;
	update(node * 2,start, mid,  index, dif);
	update(node * 2 + 1,mid + 1, end,  index, dif);
}

void Answer()
{
	cin >> N >> Q;
	arr  = vector<LL>(N + 1);
	tree = vector<LL>(N * 4);
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	init(1, 1, N);

	for (int i = 0; i < Q; i++)
	{
		int x, y, a, b; cin >> x >> y >> a >> b;
		if (y < x)
		{
			int temp = y;
			y = x;
			x = temp;
		}
		cout << getnumber(1, 1, N, x, y) << endl;
		update(1, 1, N, a, b - arr[a]);
		arr[a] = b;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}


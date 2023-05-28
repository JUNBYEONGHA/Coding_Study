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

vector<int> arr;
vector<int> tree;
int N, M, K;

int init(int node, int start, int end)
{
	if (start == end) return tree[node] = 1;
	int mid = (start + end) / 2;
	return tree[node] = (init(node * 2, start, mid)
		+ init(node * 2 + 1, mid + 1, end));
}
int getnumber(int node, int start, int end, int number)
{
	tree[node]--;
	if (start == end) return start;
	int mid = (start + end) / 2;
	if (number <= tree[2 * node]) return getnumber(2 * node, start, mid, number);
	else return getnumber(2 * node + 1, mid + 1, end, number - tree[2 * node]);
}

void Answer()
{
	cin >> N >> K;
	arr  = vector<int>(N + 1);
	tree = vector<int>(N * 4);
	init(1, 1, N);
	int index = K - 1;
	cout << "<";
	for (int i = 1; i <= N; i++)
	{
		int getindex = getnumber(1, 1, N, index + 1);
		if (i != N)
		{
			cout << getindex << ", ";
		}
		else
		{
			cout << getindex;
		}
		if (tree[1] == 0) break;

		index += K - 1;
		index %= tree[1];
	}
	cout << ">";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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

int table[1025][1025];
int tree[1025][1025];
int length;

int sum(int r, int c)
{
	int result = 0;
	for (int x = r; x > 0 ; x -= (x & -x))
	{
		for (int y = c; y > 0; y -= (y & -y))
		{
			result += tree[x][y];
		}
	}
	return result;
}

void update(int r, int c, int num)
{
	for (int x = r; x <= length; x += (x & -x))
	{
		for (int y = c; y <= length; y += (y & -y))
		{
			tree[x][y] += num;
		}
	}
}


void Answer()
{
	int M; cin >> length >> M;
	for (int x = 1; x <= length; x++)
	{
		for (int y = 1; y <= length ; y++)
		{
			cin >> table[x][y];
			update(x, y, table[x][y]);
		}
	}
	int w, x1, y1, x2, y2, n;
	while (M--)
	{
		cin >> w;
		if (w)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			cout << sum(x2, y2) - sum(x2, y1 - 1) - sum(x1 - 1, y2) 
				+ sum(x1 - 1, y1 - 1) << endl;
		}
		else
		{
			cin >> x1 >> y1 >> n;
			update(x1, y1, n - table[x1][y1]);
			table[x1][y1] = n;
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
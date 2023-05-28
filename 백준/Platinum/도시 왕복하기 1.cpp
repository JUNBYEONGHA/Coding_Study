#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 401
#define INF 2147483647

int result;
int c[MAX][MAX], f[MAX][MAX], d[MAX];
vector<int> a[MAX];

void maxFlow(int start, int end)
{
	while (true)
	{
		fill(d, d + MAX, -1);
		queue<int> q;
		q.push(start);
		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			for (int i = 0; i < a[x].size(); i++)
			{
				int y = a[x][i];
				if (c[x][y] - f[x][y] > 0 && d[y] == -1)
				{
					q.push(y);
					d[y] = x;
					if (y == end) break;
				}
			}
		}
		if (d[end] == -1) break;
		int flow = INF;
		for (int i = end; i != start; i = d[i])
		{
			flow = min(flow, c[d[i]][i] - f[d[i]][i]);
		}
		for (int i = end; i != start; i = d[i])
		{
			f[d[i]][i] += flow;
			f[i][d[i]] -= flow;
		}
		result += flow;
	}
}

void Answer()
{
	int n, p;
	cin >> n >> p;

	for (int i = 0; i < p; i++)
	{
		int A, B;
		cin >> A >> B;
		a[A].push_back(B);
		a[B].push_back(A);
		c[A][B] = 1;
	}
	maxFlow(1,2);
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
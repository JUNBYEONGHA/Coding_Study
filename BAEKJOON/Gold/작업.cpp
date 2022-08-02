#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 10001
int N, M;
int inDegree[MAX];
int result[MAX];
int cost[MAX];
vector<int> arr[MAX];

void topologySort()
{
	queue<int> q;
	for (int i = 1; i <= N ; i++)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
			result[i] = cost[i];
		}
	}
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < arr[x].size(); i++)
		{
			int y = arr[x][i];
			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
			result[y] = max(result[y], result[x] + cost[y]);
		}
	}
}

void Answer()
{
	cin >> N ;
	for (int i = 1; i <= N; i++)
	{
		int a, b, c;
		cin >> a;
		cost[i] = a;
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> c;
			arr[i].push_back(c);
			inDegree[c]++;
		}
	}
	topologySort();
	int max_result = 0;
	for (int i = 1; i <= N; i++)
	{
		max_result = max(max_result, result[i]);
	}
	cout << max_result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
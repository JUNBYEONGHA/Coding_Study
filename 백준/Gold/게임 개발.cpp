#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 501
int N, M;
int inDegree[MAX];
int finish_time[MAX];
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
			finish_time[i] = cost[i];
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
			finish_time[y] = max(finish_time[y], finish_time[x] + cost[y]);
		}
	}
}

void Answer()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int b;
		cin >> cost[i];
		while (true)
		{
			cin >> b;
			if (b == -1) break;
			arr[b].push_back(i);
			inDegree[i]++;
		}
	}
	topologySort();
	for (int i = 1; i <= N; i++)
	{
		cout << finish_time[i] << endl;
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 32001
int N, M;
int inDegree[MAX];
vector<int> arr[MAX];
int result[MAX];

void topologySort()
{
	queue<int> q;
	for (int i = 1; i <= N ; i++)
	{
		if (inDegree[i] == 0) q.push(i);
	}
	for (int i = 1; i <= N ; i++)
	{
		if (q.empty()) return;
		int x = q.front();
		q.pop();
		result[i] = x;
		for (int i = 0; i < arr[x].size(); i++)
		{
			int y = arr[x][i];
			if (--inDegree[y] == 0)
				q.push(y);
		}
	}
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		inDegree[b]++;
	}
	topologySort();
	for (int i = 1; i <= N; i++)
	{
		cout << result[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
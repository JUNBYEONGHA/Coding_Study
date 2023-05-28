#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define endl "\n"
using namespace std;

int N, M, R;
int visit[100001] = { 0, };
vector<vector<int>> graph;

void BFS()
{
	int start = 1;
	queue<int> Q;
	Q.push(R);
	visit[R] = start;
	while (!Q.empty())
	{
		int r = Q.front();
		Q.pop();
		for (int a : graph[r])
		{
			if (!visit[a])
			{
				start++;
				visit[a] = start;
				Q.push(a);
			}
		}
	}
}
void Answer()
{
	cin >> N >> M >> R;
	int A, B;
	graph = vector<vector<int>>(N + 1);
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		graph[A].push_back(B);
		graph[B].push_back(A);
	}
	for (int i = 1; i <= N; i++)
	{
		sort(graph[i].begin(), graph[i].end(), greater<>());
	}
	BFS();
	for (int i = 1; i <= N; i++)
	{
		cout << visit[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
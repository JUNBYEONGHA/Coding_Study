#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define endl "\n"
using namespace std;

int N, M, R;
long long avisit[100001] = {0,};
long long bvisit[100001] = {0,};
vector<vector<int>> graph;

void BFS()
{
	int start = 1;
	queue<pair<int,int>> Q;
	Q.push(make_pair(R,1));
	avisit[R] = 0;
	bvisit[R] = start;
	while (!Q.empty())
	{
		int r = Q.front().first;
		int depth = Q.front().second;
		Q.pop();
		for (int a : graph[r])
		{
			if (avisit[a] == -1)
			{
				avisit[a] = depth;
				start++;
				bvisit[a] = start;
				Q.push(make_pair(a,depth+1));
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
		sort(graph[i].begin(), graph[i].end());
		avisit[i] = -1;
	}
	BFS();
	long long result = 0;
	for (int i = 1; i <= N; i++)
	{
		result += avisit[i] * bvisit[i];
	}
	cout << result << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
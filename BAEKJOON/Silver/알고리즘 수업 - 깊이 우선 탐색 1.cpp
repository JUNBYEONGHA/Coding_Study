#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

#define INF 100001
vector<int> dfs[INF];
bool visit[INF];
int result[INF];
int N, M, V = 1;

void DFS(int index) 
{
	visit[index] = true;
	result[index] = V;
	for (int i = 0; i < dfs[index].size(); i++)
	{
		if (!visit[dfs[index][i]])
		{
			V++;
			DFS(dfs[index][i]);
		}
	}
}

void Answer()
{
	int R , A , B;
	cin >> N >> M >> R;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		dfs[A].push_back(B);
		dfs[B].push_back(A);
	}
	for (int i = 1; i <= N; i++)
	{
		sort(dfs[i].begin(), dfs[i].end());
	}
	DFS(R);
	for (int i = 1; i <= N; i++)
	{
		cout << result[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
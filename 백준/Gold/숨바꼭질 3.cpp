#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 100001
bool visit[MAX];

int BFS(int N, int K)
{
	queue<pair<int, int>> q;
	q.push(make_pair(N, 0));
	visit[N] = true;

	while (!q.empty())
	{
		int Line = q.front().first;
		int time = q.front().second;
		q.pop();

		if (Line == K)
		{
			return time;
		}
		if (Line * 2 < MAX && !visit[Line * 2])
		{
			q.push(make_pair(Line * 2, time));
			visit[Line * 2] = true;
		}
		if (Line - 1 >= 0 && !visit[Line - 1])
		{
			q.push(make_pair(Line - 1, time + 1));
			visit[Line - 1] = true;
		}
		if (Line + 1 < MAX && !visit[Line + 1])
		{
			q.push(make_pair(Line + 1, time + 1));
			visit[Line + 1] = true;
		}
	}
}

void Answer()
{
	int N, K;
	cin >> N >> K;
	cout << BFS(N, K) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
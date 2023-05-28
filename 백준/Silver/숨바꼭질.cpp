#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 100010
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

		if (Line == K) return time;
		if (Line + 1 < MAX && !visit[Line + 1]) 
		{
			q.push(make_pair(Line + 1, time + 1));
			visit[Line + 1] = true;
		}
		if (Line - 1 >= 0 && !visit[Line - 1]) 
		{
			q.push(make_pair(Line - 1, time + 1));
			visit[Line - 1] = true;
		}
		if (Line * 2 < MAX && !visit[Line * 2])
		{
			q.push(make_pair(Line * 2, time + 1));
			visit[Line * 2] = true;
		}
	}
}

void Input()
{
	int N, K;
	cin >> N >> K;
	cout << BFS(N, K) << endl;
	return;
}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}
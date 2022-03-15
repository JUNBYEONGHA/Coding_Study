#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 100001
bool visit[MAX];

void BFS(int N, int K)
{
	queue<pair<int, int>> q;
	q.push(make_pair(N, 0));
	visit[N] = true;
	int cnt = 0 , t = 0;
	while (!q.empty())
	{
		int Line = q.front().first;
		int time = q.front().second;
		q.pop();
		visit[Line] = true;
		if (cnt && Line == K && time == t) cnt++;

		if (!cnt && Line == K)
		{
			t = time;
			cnt++;
		}
		if (Line * 2 < MAX && !visit[Line * 2])
		{
			q.push(make_pair(Line * 2, time + 1));
		}
		if (Line - 1 >= 0 && !visit[Line - 1])
		{
			q.push(make_pair(Line - 1, time + 1));
		}
		if (Line + 1 < MAX && !visit[Line + 1])
		{
			q.push(make_pair(Line + 1, time + 1));
		}
	}
	cout << t << endl << cnt;
}

void Answer()
{
	int N, K;
	cin >> N >> K;
	BFS(N, K);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}


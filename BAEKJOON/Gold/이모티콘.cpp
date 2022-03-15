#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 1001
bool visit[MAX][MAX];

int BFS(int S)
{
	queue<pair<int,pair<int, int>>> q;
	q.push(make_pair(0,make_pair(1, 0)));
	visit[1][0] = true;

	while (!q.empty())
	{
		int time = q.front().first;
		int screen = q.front().second.first;
		int clip = q.front().second.second;
		q.pop();

		if (screen == S)
			return time;
		if (!visit[screen][screen])
		{
			q.push(make_pair(time + 1,make_pair(screen,screen)));
			visit[screen][screen] = true;
		}
		if (screen + clip <= S && !visit[screen + clip][clip])
		{
			q.push(make_pair(time + 1, make_pair(screen + clip, clip)));
			visit[screen + clip][clip] = true;
		}
		if (screen - 1 >= 0 && !visit[screen - 1][clip])
		{
			q.push(make_pair(time + 1, make_pair(screen - 1, clip)));
			visit[screen - 1][clip] = true;
		}
	}
}

void Answer()
{
	int S;
	cin >> S;
	cout << BFS(S) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
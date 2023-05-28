#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 1000001
bool visit[MAX];
int UP, DOWN;

int BFS(int N, int target,int K)
{
	queue<pair<int,int>> q;
	q.push(make_pair(N,0));
	visit[N] = true;
	while (!q.empty())
	{
		int floor = q.front().first;
		int count = q.front().second;
		q.pop();
		if (floor == target)
			return count;

		if (floor + UP <= K && !visit[floor + UP])
		{
			q.push(make_pair((floor + UP), count + 1));
			visit[floor + UP] = true;
		}
		if (floor - DOWN > 0 && !visit[floor - DOWN])
		{
			q.push(make_pair((floor - DOWN), count + 1));
			visit[floor - DOWN] = true;
		}
	}
	return -1;
}

void Input()
{
	int N, K , target;
	cin >> K >> N >> target >>UP >> DOWN;
	int answer = BFS(N, target, K);
	if (answer == -1)
		cout << "use the stairs";
	else
		cout << answer;
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
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

#define endl "\n"
using namespace std;

vector<int> members[51];
int scores[51];
int visit[51];

int BFS(int start)
{
	memset(visit, 0, sizeof(visit));
	queue<int> q;
	visit[start] = 1;
	q.push(start);
	int result = 0;
	while (!q.empty())
	{
		int start = q.front();
		q.pop();
		result = max(result, visit[start]);
		for (int i = 0; i < members[start].size() ; i++)
		{
			int next = members[start][i];
			if (!visit[next])
			{
				visit[next] = visit[start] + 1;
				q.push(next);
			}
		}
	}
	return result;
}

void Answer()
{
	int member , a , b;
	cin >> member;
	while (true)
	{
		cin >> a >> b;
		if (a == -1) break;
		members[a].push_back(b);
		members[b].push_back(a);
	}
	int minscore = 1000;
	vector<int> answer;
	for (int i = 1; i <= member; i++)
	{
		scores[i] = BFS(i);
		minscore = min(minscore, scores[i]);
	}
	for (int i = 1; i <= member; i++)
	{
		if (scores[i] == minscore)
		{
			answer.push_back(i);
		}
	}
	cout << minscore - 1 << " " << answer.size() << endl;
	for (int i = 0; i < answer.size() ; i++)
	{
		cout << answer[i] << " ";
	}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
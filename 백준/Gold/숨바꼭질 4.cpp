#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 100001
bool visit[MAX];
int save_Line[MAX];
vector<int> answer_path;

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
			int index = Line;
			while (index != N)
			{
				answer_path.push_back(index);
				index = save_Line[index];
			}
			answer_path.push_back(N);
			return time;
		}
		if (Line + 1 < MAX && !visit[Line + 1])
		{
			q.push(make_pair(Line + 1, time + 1));
			visit[Line + 1] = true;
			save_Line[Line + 1] = Line;
		}
		if (Line - 1 >= 0 && !visit[Line - 1])
		{
			q.push(make_pair(Line - 1, time + 1));
			visit[Line - 1] = true;
			save_Line[Line - 1] = Line;
		}
		if (Line * 2 < MAX && !visit[Line * 2])
		{
			q.push(make_pair(Line * 2, time + 1));
			visit[Line * 2] = true;
			save_Line[Line * 2] = Line;
		}
	}
}

void Answer()
{
	int N, K;
	cin >> N >> K;
	cout << BFS(N, K) << endl;
	for (int i = answer_path.size() - 1; i >= 0; i--)
	{
		cout << answer_path[i] << " ";
	}	
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
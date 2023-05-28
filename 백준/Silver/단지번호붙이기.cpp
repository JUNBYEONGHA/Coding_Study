#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 101

char MAP[MAX][MAX];
bool visit[MAX][MAX];
int N, M;
vector<int> answer;

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void BFS(int X, int Y)
{
	queue < pair<int, int>> q;
	visit[X][Y] = true;
	q.push(make_pair(X, Y));
	int temp = 1;
	while (!q.empty())
	{
		int X = q.front().first;
		int Y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];
			if (!visit[nx][ny] && (MAP[nx][ny] == '1'))
			{
				q.push(make_pair(nx, ny));
				visit[nx][ny] = true;
				temp++;
			}
		}
	}
	answer.push_back(temp);
}

void Input()
{
	char A;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A;
			MAP[i][j] = A;
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!visit[i][j] && (MAP[i][j] == '1'))
			{
				BFS(i, j);
			}
		}
	}
}

void Solutution()
{
	sort(answer.begin(), answer.end());
	cout << answer.size() << endl;
	for(int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << endl;
	}
}

void Answer()
{
	Input();
	Solutution();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}

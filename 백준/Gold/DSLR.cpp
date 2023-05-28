#include<iostream>
#include<cstring>
#include<queue>
#define endl "\n"
using namespace std;

bool visit[10000];

void BFS(int start, int end)
{
	queue<pair<string, int>> q;
	q.push({ "",start });
	visit[start] = true;
	while (!q.empty())
	{
		string dslr = q.front().first;
		int temp = q.front().second;
		q.pop();

		if (temp == end)
		{
			cout << dslr << endl;
			return;
		}
		int D, S, L, R;
		D = (temp * 2) % 10000;
		if (!visit[D])
		{
			visit[D] = true;
			q.push({ dslr + "D" , D });
		}
		S = temp - 1 < 0 ? 9999 : temp - 1;
		if (!visit[S])
		{
			visit[S] = true;
			q.push({ dslr + "S" , S });
		}
		L = temp % 1000 * 10 + temp / 1000;
		if (!visit[L])
		{
			visit[L] = true;
			q.push({ dslr + "L" , L });
		}
		R = temp / 10 + temp % 10 * 1000;
		if (!visit[R])
		{
			visit[R] = true;
			q.push({ dslr + "R" , R });
		}
	}
}

void Answer()
{
	int T;
	int A, B;
	cin >> T;
	while (T--)
	{
		cin >> A >> B;
		memset(visit, false, sizeof(visit));
		BFS(A, B);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 100001

int N;
int arr[MAX];
bool visit[MAX];
vector<int> v[MAX];

void DFS(int k)
{
	visit[k] = true;
	for (int i = 0; i < v[k].size(); i++)
	{
		int next = v[k][i];
		if (!visit[next])
		{
			arr[next] = k;
			DFS(next);
		}
	}
}

void Answer()
{
	cin >> N;

	for (int i = 0; i < N - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	DFS(1);

	for (int i = 2; i <= N; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
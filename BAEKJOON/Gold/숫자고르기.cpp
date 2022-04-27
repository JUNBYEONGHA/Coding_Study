#include<iostream>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;

bool visit[101];
int nums[101];
int N;
vector<int> result;

void DFS(int start , int cur)
{
	if (!visit[cur])
	{
		visit[cur] = true;
		DFS(start, nums[cur]);
	}
	else if (cur == start)
	{
		result.push_back(start);
		return;
	}
}

void Answer()
{
	int A;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> nums[i];
	}
	for (int i = 1; i <= N; i++)
	{
		memset(visit, false, sizeof(visit));
		DFS(i, i);
	}
	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
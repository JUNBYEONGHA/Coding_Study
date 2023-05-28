#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

int n, cnt;
int student[100001];
bool visit[100001];
bool done[100001];

void DFS(int nodeNum)
{
	visit[nodeNum] = true;
	int next = student[nodeNum];
	if (!visit[next])
		DFS(next);
	else if (!done[next])
	{
		for (int i = next; i != nodeNum; i = student[i])
			cnt++;
		cnt++; 
	}
	done[nodeNum] = true; 
}

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> student[i];
			visit[i] = false;
			done[i] = false;
		}
		cnt = 0;
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i]) DFS(i);
		}
		cout << n - cnt << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
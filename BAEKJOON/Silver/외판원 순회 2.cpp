#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;

int N,result = INT_MAX;
int city[11][11];
bool visit[11];
int print[11];
int start;

void TSP(int node, int costSum, int count)
{
	if (count == N)
	{
		if (city[node][start] > 0)
			result = min(costSum + city[node][start], result);
	}
	for (int i = 0; i < N; i++)
	{
		if (city[node][i] == 0) continue;
		if (visit[i] == true) continue;

		visit[i] = true;
		if (costSum + city[node][i] < result)
			TSP(i, costSum + city[node][i], count + 1);
		visit[i] = false;
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> city[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		start = i;
		visit[i] = true;
		TSP(i, 0, 1);
		visit[i] = false;
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>

#define endl "\n"
using namespace std;
#define MAX 101
#define INF 10000000

int d[MAX][MAX];
int N, M;

void floydWarshall()
{
	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (d[i][k] + d[k][j] < d[i][j])
					d[i][j] = d[i][k] + d[k][j];
			}
		}
	}
}

void Answer()
{
	cin >> N >> M;
	int a, b, c;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			d[i][j] = INF;
	for (int i = 1; i <= N; i++)
		d[i][i] = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		d[a][b] = min(d[a][b],c);
	}
	floydWarshall();
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (d[i][j] == INF)
				cout << 0 << " ";
			else
				cout << d[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
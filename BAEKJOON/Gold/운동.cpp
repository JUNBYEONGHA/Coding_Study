#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>

#define endl "\n"
using namespace std;
#define MAX 401
#define INF 10000000

int v, e, result;
int arr[MAX][MAX];

void Answer()
{
	cin >> v >> e;
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			arr[i][j] = INF;
	result = INF;
	int a, b, c;
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> c;
		arr[a][b] = c;
	}
	for (int k = 1; k <= v; k++)
		for (int i = 1; i <= v; i++)
			for (int j = 1; j <= v; j++)
				if (arr[i][j] > arr[i][k] + arr[k][j])
					arr[i][j] = arr[i][k] + arr[k][j];
	for (int i = 1; i <= v; i++)
		result = min(result, arr[i][i]);
	cout << ((result == INF) ? -1 : result) << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
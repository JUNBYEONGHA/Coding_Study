#include<iostream>

#define endl "\n"
using namespace std;

#define MAX 301
int arr[MAX][MAX] ,arr_p[MAX][MAX];
int N, M, order_count;

void Answer()
{
	cin >> N >> M >> order_count;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	while (order_count--)
	{
		for (int rot = 0; rot < min(N, M) / 2; rot++)
		{
			int x1 = rot, y1 = rot, x2 = N - 1 - rot, y2 = M - 1 - rot;
			for (int i = y2 - 1; i >= y1; i--)
			{
				arr_p[x1][i] = arr[x1][i + 1];
			}
			for (int i = x1 + 1; i <= x2; i++)
			{
				arr_p[i][y1] = arr[i - 1][y1];
			}
			for (int i = y1 + 1; i <= y2; i++)
			{
				arr_p[x2][i] = arr[x2][i - 1];
			}
			for (int i = x2 - 1; i >= x1; i--)
			{
				arr_p[i][y2] = arr[i + 1][y2];
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				arr[i][j] = arr_p[i][j];
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << " ";
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

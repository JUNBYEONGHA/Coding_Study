#include<iostream>
#include<vector>
#include<queue>

#define endl "\n"
using namespace std;

#define MAX 101
int arr[MAX][MAX] , arr_p[MAX][MAX];
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
	int order;
	while (order_count--)
	{
		cin >> order;
		if (order == 1)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					arr_p[i][j] = arr[(N - 1) - i][j];
				}
			} 
		}
		else if (order == 2)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					arr_p[i][j] = arr[i][(M - 1) - j];
				}
			}
		}
		else if (order == 3)
		{
			int temp = N;
			N = M;
			M = temp;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					arr_p[i][j] = arr[(M - 1) - j][i];
				}
			}
		}
		else if (order == 4)
		{
			int temp = N;
			N = M;
			M = temp;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					arr_p[i][j] = arr[j][(N - 1) - i];
				}
			}
		}
		else if (order == 5)
		{
			int n = N / 2;
			int m = M / 2;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					arr_p[i][j] = arr[i + n][j];
				}
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = m; j < M; j++)
				{
					arr_p[i][j] = arr[i][j - m];
				}
			}
			for (int i = n; i < N; i++)
			{
				for (int j = 0; j < m; j++)
				{
					arr_p[i][j] = arr[i][j + m];
				}
			}
			for (int i = n; i < N; i++)
			{
				for (int j = m; j < M; j++)
				{
					arr_p[i][j] = arr[i - n][j];
				}
			}
		}
		else if (order == 6)
		{
			int n = N / 2;
			int m = M / 2;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					arr_p[i][j] = arr[i][j + m];
				}
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = m; j < M; j++)
				{
					arr_p[i][j] = arr[i + n][j];
				}
			}
			for (int i = n; i < N; i++)
			{
				for (int j = 0; j < m; j++)
				{
					arr_p[i][j] = arr[i - n][j];
				}
			}
			for (int i = n; i < N; i++)
			{
				for (int j = m; j < M; j++)
				{
					arr_p[i][j] = arr[i][j - m];
				}
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

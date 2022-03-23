#include<iostream>

#define endl "\n"
using namespace std;

#define MAX 301
int arr[MAX][MAX];
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
	int y1 = 0;
	int x1 = 0;
	int y2 = N - 1;
	int x2 = 0;
	int y3 = N - 1;
	int x3 = M - 1;
	int y4 = 0;
	int x4 = M - 1;

	while ((y1 < y2) && (x1 < x4))
	{
		int move = order_count % ((y2 - y1) * 2 + (x4 - x1) * 2);
		while (move--)
		{
			int tmp = arr[y1][x1];
			for (int j = x1; j < x4; j++) 
				arr[y1][j] = arr[y1][j + 1];
			for (int i = y4; i < y3; i++)
				arr[i][x4] = arr[i + 1][x4];
			for (int j = x3; j > x2; j--)
				arr[y3][j] = arr[y3][j - 1];
			for (int i = y2; i > y1; i--)
				arr[i][x2] = arr[i - 1][x2];
			arr[y1 + 1][x1] = tmp;
		}

		y1 += 1;
		x1 += 1;
		y2 -= 1;
		x2 += 1;
		y3 -= 1;
		x3 -= 1;
		y4 += 1;
		x4 -= 1;
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

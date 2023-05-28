#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;

int A[1001][1001];
int B[1001][1001];

void Answer()
{
	int H, W, X, Y;
	cin >> H >> W >> X >> Y;
	for (int i = 0; i < H + X; i++)
	{
		for (int j = 0; j < W + Y; j++)
		{
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			A[i][j] = B[i][j];
		}
	}
	for (int i = X; i < H + X; i++)
	{
		for (int j = Y; j < W + Y; j++)
		{
			A[i][j] -= A[i - X][j - Y];
		}
	}
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
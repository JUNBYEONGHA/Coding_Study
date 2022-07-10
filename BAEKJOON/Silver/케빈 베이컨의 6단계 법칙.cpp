#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int user[101][101];
int N, M;
void Answer()
{
	int A, B;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			user[i][j] = 5001;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		user[i][i] = 0;
	}
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		user[A][B] = 1;
		user[B][A] = 1;
	}
	for (int k = 1;  k <= N;  k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (user[i][k] + user[k][j] < user[i][j])
					user[i][j] = user[i][k] + user[k][j];
			}
		}
	}
	int value = 5001;
	int result;
	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		for (int j = 0; j <= N; j++)
		{
			temp += user[i][j];
		}
		if (temp < value)
		{
			value = temp;
			result = i;
		}
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
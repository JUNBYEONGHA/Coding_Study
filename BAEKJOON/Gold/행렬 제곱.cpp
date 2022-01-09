#include <string>
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;

long long N, B;
long long A[5][5];
long long temp[5][5];
long long ans[5][5];

void print_Matrix(long long arr[5][5])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void Matrix_multi(long long X[5][5], long long Y[5][5])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			temp[i][j] = 0;
			for (int k = 0; k < N; k++)
				temp[i][j] += (X[i][k] * Y[k][j]);

			temp[i][j] %= 1000;
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			X[i][j] = temp[i][j];
}

void Input()
{
	cin >> N >> B;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> A[i][j];
		ans[i][i] = 1;
	}

	while (B > 0)
	{
		if (B % 2 == 1)
		{
			Matrix_multi(ans, A);
		}
		Matrix_multi(A, A);
		B /= 2;
	}

	print_Matrix(ans);
}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}

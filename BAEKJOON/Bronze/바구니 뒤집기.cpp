#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

int baguni[101];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		baguni[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int j = 0; j <= (b - a) / 2; j++)
		{
			int temp = baguni[j + a];
			baguni[j + a] = baguni[b - j];
			baguni[b - j] = temp;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << baguni[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
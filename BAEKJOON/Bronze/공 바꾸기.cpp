#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

int basket[101];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		basket[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		int temp = basket[a];
		basket[a] = basket[b];
		basket[b] = temp;
	}
	for (int i = 1; i <= N; i++)
	{
		cout << basket[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
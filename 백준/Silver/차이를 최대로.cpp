#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;
int arr[9],print[9],result = 0;
bool visit[9];
void DFS(int length)
{
	if (length == N)
	{
		int sum = 0;
		for (int i = 0; i < N - 1; i++)
		{
			sum += abs(print[i] - print[i + 1]);
		}
		result = max(result, sum);
		return;
	}
	for (int i = 0; i < N; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			print[length] = arr[i];
			DFS(length + 1);
			visit[i] = false;
		}
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	DFS(0);
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
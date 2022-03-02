#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;
int print[9];
bool visit[9];
void DFS(int length)
{
	if (length == N)
	{
		for (int i = 0; i < N; i++)
		{
			cout << print[i] << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			print[length] = i;
			DFS(length + 1);
			visit[i] = false;
		}
	}
}

void Answer()
{
	cin >> N;
	DFS(0);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
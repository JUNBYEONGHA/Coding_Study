#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;
char arr[10][10];
int visit[10];

bool check(int idx)
{
	int sum = 0;
	for (int i = idx; i >= 0; i--)
	{	
		sum = sum + visit[i];
		if (arr[i][idx] == '+' && sum <= 0) return false;
		if (arr[i][idx] == '-' && sum >= 0) return false;
		if (arr[i][idx] == '0' && sum != 0) return false;
	}
	return true;
}

void DFS(int cnt)
{
	if (cnt == N)
	{
		for (int i = 0; i < cnt; i++)
		{
			cout << visit[i] << " ";
		}
		cout << endl;
		exit(0);
	}
	for (int i = -10; i <= 10; i++)
	{
		visit[cnt] = i;
		if (check(cnt) == true) DFS(cnt + 1);
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}
	DFS(0);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
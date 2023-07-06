#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

char A[51][51], B[51][51];

void Answer()
{
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> B[i][j];
		}
	}
	int answer = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = 0; j < M - 2; j++)
		{
			if (A[i][j] != B[i][j])
			{
				for (int k = i; k <= i + 2; k++)
				{
					for (int l = j; l <= j + 2; l++)
					{
						if (A[k][l] == '1') A[k][l] = '0';
						else A[k][l] = '1';
					}
				}
				answer += 1;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (A[i][j] != B[i][j])
			{
				cout << -1;
				return;
			}
		}
	}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
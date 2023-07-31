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

char Castle[51][51];
int x[51], y[51];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> Castle[i][j];
			if (Castle[i][j] == 'X')
			{
				x[j] = 1;
				y[i] = 1;
			}
		}
	}
	int xc = 0;
	for (int i = 0; i < M; i++)
	{
		if (x[i] == 0) xc++;
	}
	int yc = 0;
	for (int i = 0; i < N; i++)
	{
		if (y[i] == 0) yc++;
	}
	cout << max(xc, yc);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
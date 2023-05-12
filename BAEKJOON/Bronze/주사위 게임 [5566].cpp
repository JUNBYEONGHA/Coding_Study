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

#define endl "\n"
using LL = long long;
using namespace std;

int dice[1001];
int board[1001];

void Answer()
{
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> board[i];
	}for (int i = 1; i <= M; i++)
	{
		cin >> dice[i];
	}
	int now = 1, index = 1, cnt = 0;
	while(true) 
	{
		if (now >= N) break;
		now += dice[index];
		now += board[now];
		index++;
		cnt++;
	}
	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
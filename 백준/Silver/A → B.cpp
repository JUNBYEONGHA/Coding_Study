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
#define INF 10000000
LL A, B;
int resultcnt = INF;

void DFS(LL n , int cnt)
{
	if (n == B)
	{
		resultcnt = min(resultcnt, cnt);
		return;
	}
	else if (n > B) return;
	else
	{
		DFS(n * 2, cnt + 1);
		DFS(n * 10 + 1, cnt + 1);
	}
}

void Answer()
{
	cin >> A >> B;
	DFS(A, 1);
	cout << (resultcnt == INF ? -1 : resultcnt);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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
int visit[300000];
void DFS(int A, int P)
{
	if (visit[A] > 2) return;
	visit[A]++;
	int temp = A, sum = 0;
	while (temp)
	{
		sum += (int)(pow(temp % 10, P));
		temp /= 10;
	}
	DFS(sum, P);
}

void Answer()
{
	int A, P; cin >> A >> P;
	int cnt = 0;
	DFS(A, P);
	for (int i = 0; i < 300000; i++)
	{
		if (visit[i] == 1) cnt++;
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
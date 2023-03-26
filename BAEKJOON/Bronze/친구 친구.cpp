#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

int N, M, u, v, a[100001];
void Answer()
{
    cin >> N >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> u >> v;
        a[u]++;
        a[v]++;
    }
    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
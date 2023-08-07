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

void Answer()
{
	int N; cin >> N;
	deque<int> que;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) 
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++) 
	{
		int x; cin >> x;
		if (arr[i]) continue;
		que.push_back(x);
	}
	int M; cin >> M;
	while (M--) 
	{
		int x; cin >> x;
		que.push_front(x);
		cout << que.back() << ' ';
		que.pop_back();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
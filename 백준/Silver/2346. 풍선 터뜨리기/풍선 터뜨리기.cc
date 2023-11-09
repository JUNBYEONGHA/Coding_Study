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
#define FOR0(i,length) for(int i = 0 ; i < length ; ++i)
#define FOR1(i,length) for(int i = 1 ; i <= length ; ++i)
#define FORLength(i,length) for(int i = length - 1; i >= 0 ; --i)
using LL = long long;
using namespace std;

void Answer()
{
	int N; cin >> N;
	int ballonNum;
	deque<pair<int,int>> ballons;
	FOR1(i, N)
	{
		cin >> ballonNum;
		ballons.push_back({i , ballonNum});
	}
	while (!ballons.empty())
	{
		int move = ballons.front().second;
		cout << ballons.front().first << " ";
		ballons.pop_front();
		if (ballons.empty()) break;
		if (move > 0)
		{
			move--;
			FOR0(i, move)
			{
				ballons.push_back(ballons.front());
				ballons.pop_front();
			}
		}
		else
		{
			FOR0(i, -move)
			{
				ballons.push_front(ballons.back());
				ballons.pop_back();
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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

#define endl "\n";
#define FOR0(i,length) for(int i = 0 ; i < length ; ++i)
#define FOR1(i,length) for(int i = 1 ; i <= length ; ++i)
#define FORLength(i,length) for(int i = length - 1; i >= 0 ; --i)
using LL = long long;
using PII = std::pair<int, int>;
using namespace std;

set<string> s;
void Answer()
{
	int N; cin >> N;
	char game; cin >> game;
	FOR0(i, N)
	{
		string temp; cin >> temp;
		s.insert(temp);
	}
	switch (game)
	{
	case 'Y' :
		cout << s.size() << endl;
		break;
	case 'F':
		cout << s.size() / 2 << endl;
		break;
	default:
		cout << s.size() / 3 << endl;
		break;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
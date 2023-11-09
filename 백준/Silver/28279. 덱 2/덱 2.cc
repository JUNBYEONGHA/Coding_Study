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
	int order;
	deque<int> orderNums;
	FOR0(i,N)
	{
		cin >> order;
		switch (order)
		{
		case 1:
			cin >> order;
			orderNums.push_front(order);
			break;
		case 2:
			cin >> order;
			orderNums.push_back(order);
			break;
		case 3:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.front() << endl; orderNums.pop_front(); }
			break;
		case 4:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.back() << endl; orderNums.pop_back(); }
			break;
		case 5:
			cout << orderNums.size() << endl;
			break;
		case 6:
			cout << orderNums.empty() << endl;
			break;
		case 7:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.front() << endl; }
			break;
		case 8:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.back() << endl; }
			break;
		default:
			break;
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
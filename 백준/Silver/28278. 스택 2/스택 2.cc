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
	int order;
	stack<int> orderNums;
	for (int i = 0; i < N; i++)
	{
		cin >> order;
		switch (order)
		{
		case 1:
			cin >> order;
			orderNums.push(order);
			break;
		case 2:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.top() << endl; orderNums.pop(); }
			break;
		case 3:
			cout << orderNums.size() << endl;
			break;
		case 4:
			cout << orderNums.empty() << endl;
			break;
		case 5:
			if (orderNums.empty()) cout << "-1" << endl;
			else { cout << orderNums.top() << endl; }
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
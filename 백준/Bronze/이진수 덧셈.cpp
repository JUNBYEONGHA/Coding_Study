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

#define endl "\n"
using LL = long long;
using namespace std;


void Answer()
{
	string a, b;
	cin >> a >> b;
	string big, small;
	if (a.size() >= b.size())
	{
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}
	for (int i = 0; i <= small.size(); i++)
	{
		big[big.size() - i] += small[small.size() - i] - '0';
	}
	for (int i = big.size() - 1; i > 0; i--)
	{
		if (big[i] > '1')
		{
			big[i] -= 2;
			big[i - 1] += 1;
		}
	}
	if (big[0] > '1')
	{
		big[0] -= 2;
		cout << '1' + big;
	}
	else
	{
		while (big[0] == '0')
		{
			big = big.substr(1);
		}
		if (big.size() == 0) 
			cout << 0;
		else
			cout << big;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
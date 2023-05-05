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

void Answer()
{
	string A, B, temp;
	char OP; 
	cin >> A >> OP >> B;
	if (A < B)
	{
		temp = A;
		A = B;
		B = temp;
	}
	
	if (OP == '*')
	{
		for (int i = B.size() - 2; i >= 0; i--)
		{
			A += '0';
		}
	}
	else
	{
		for (int i = B.size() - 1; i >= 0; i--)
		{
			A[(A.size() - B.size()) + i] += (B[i] - '0');
		}
	}
	cout << A;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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
	string A, B;
	cin >> A >> B;
	string temp = "";
	for (int i = 0; i < A.size(); i++)
	{
		temp += A[i]; temp += B[i];
	}
	while (true)
	{
		if (temp.size() <= 2) break;
		string temp2 = "";
		for (int i = 0; i < temp.size() - 1; i++)
		{
			temp2 += ((temp[i] - '0') + (temp[i + 1] - '0')) % 10 + '0';
		}
		temp = temp2;
	}
	cout << temp;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
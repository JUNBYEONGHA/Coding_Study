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
	vector<string> strings(5);
	string result = "";
	int length = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> strings[i];
		int temp = strings[i].size();
		length = max(length, temp);
	}
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (strings[j].size() <= i) continue;
			result += strings[j][i];
		}
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
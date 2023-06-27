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
	int N, count = 0;
	cin >> N;
	map<string, bool> m;
	string str1, str2;

	while (N--)
	{
		cin >> str1 >> str2;

		if (str1 == "ChongChong")
			m.insert({ str1, true });

		else if (str2 == "ChongChong")
			m.insert({ str2, true });

		if (m[str1])
			m[str2] = true;

		if (m[str2])
			m[str1] = true;
	}

	for (auto& val : m)
	{
		if (val.second)
			count++;
	}

	cout << count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
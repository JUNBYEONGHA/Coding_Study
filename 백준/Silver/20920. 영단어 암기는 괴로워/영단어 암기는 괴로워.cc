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
	int N, M; cin >> N >> M;
	map<string, int> dictionary;
	for (int i = 0; i < N; i++)
	{
		string s; cin >> s;
		if (s.size() >= M)
		{
			dictionary[s]++;
		}
	}
	vector<pair<string, int>> vdictionary(dictionary.begin(), dictionary.end());
	sort(vdictionary.begin(), vdictionary.end(),
		[](pair<string, int> a, pair<string, int> b)
		{
			if (a.second == b.second)
			{
				if (a.first.length() == b.first.length())
					return a.first < b.first;
				return a.first.length() > b.first.length();
			}
			return a.second > b.second;
		});
	for (auto& print : vdictionary)
	{
		cout << print.first << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
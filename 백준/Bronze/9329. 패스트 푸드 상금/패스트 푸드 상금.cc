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
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> sticker(31);
		vector<pair< int, vector<int> >> input;
		for (int i = 0; i < n; i++)
		{
			int k; cin >> k;
			vector<int> temp(k);
			for (int j = 0; j < k; j++)
			{
				cin >> temp[j];
			}
			int cost; cin >> cost;
			input.push_back({cost , temp});
		}
		for (int i = 1; i <= m; i++)
		{
			cin >> sticker[i];
		}
		int result = 0;
		for (int i = 0; i < input.size() ; i++)
		{
			int minstiker = 101;
			for (int j = 0; j < input[i].second.size(); j++)
			{
				minstiker = min(minstiker, sticker[input[i].second[j]]);
			}
			result += minstiker * input[i].first;
		}
		cout << result << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
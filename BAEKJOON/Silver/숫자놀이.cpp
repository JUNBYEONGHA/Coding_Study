#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using namespace std;

int N, M;
string s;
string nums[11] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };
vector<pair<string, int>> ans;

void Answer()
{
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (i >= 10)
		{
			s = nums[i / 10] + " " + nums[i % 10];
			ans.push_back({ s,i });
		}
		else
		{
			s = nums[i % 10];
			ans.push_back({ s,i });
		}
	}

	sort(ans.begin(), ans.end());

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i].second << " ";
		if (i % 10 == 9) cout << '\n';
	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
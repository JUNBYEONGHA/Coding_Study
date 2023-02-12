#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

int N, K;
vector<string> ans;

bool cmp(string a, string b) {
    if (a + b > b + a)
        return true;
    return false;
}

void Answer()
{
	cin >> K >> N;
	string str = "";
	string tmp;
	for (int i = 1; i <= K; i++) {
		cin >> tmp;
		if (str.size() < tmp.size() || (str.size() == tmp.size() && str < tmp)) str = tmp;
		ans.push_back(tmp);
	}

	for (int i = 0; i < N - K; i++)
		ans.push_back(str);

	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
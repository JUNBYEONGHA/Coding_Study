#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	string S , T;
	cin >> S >> T;
	vector<int> alpha[26];
	for (int i = 0; i < T.size(); i++)
	{
		alpha[T[i] - 'a'].push_back(i);
	}
	int left = 0, right = 0, ssize = S.size(), answer = 1;
	while (left < ssize)
	{
		int a = S[left] - 'a';
		if (alpha[a].empty())
		{
			cout << -1;
			return;
		}
		int pos = lower_bound(alpha[a].begin(), alpha[a].end(), right) - alpha[a].begin();
		if (pos >= alpha[a].size())
		{
			answer += 1;
			pos = 0;
		}
		right = alpha[a][pos];
		left += 1;
		right += 1;
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
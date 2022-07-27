#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	int t;
	cin >> t;
	while (t--)
	{
		vector<pair<int, int>> p;
		vector<int> s;
		for (int i = 0; i < 4; i++)
		{
			int a, b;
			cin >> a >> b;
			p.push_back({ a,b });
		}
		for (int i = 0; i < 4; i++)
		{
			for (int j = i + 1; j < 4; j++)
			{
				s.push_back((p[i].first - p[j].first) * (p[i].first - p[j].first) +
					(p[i].second - p[j].second) * (p[i].second - p[j].second));
			}
		}
		sort(s.begin(), s.end());
		if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[4] == s[5])
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
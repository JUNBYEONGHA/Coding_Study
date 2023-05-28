#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

#define endl "\n"
using namespace std;

int N;

void Input()
{
	cin >> N;
}
void Solution()
{
	string catag, name;
	int n;
	while (N--)
	{
		map<string, int> m;
		cin >> n;
		while (n--)
		{
			cin >> name >> catag;
			if (m.find(catag) == m.end())
			{
				m.insert({ catag,1 });
			}
			else
			{
				m[catag]++;
			}
		}
		int answer = 1;
		for (auto a : m)
		{
			answer *= (a.second + 1);
		}
		answer -= 1;
		cout << answer << endl;
	}
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
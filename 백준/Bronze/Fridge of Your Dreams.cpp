#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		int answer = 0;
		int index = 1;
		for (int i = s.size() - 1; i >= 0; i-- , index *= 2)
		{
			if (s[i] == '1')
			{
				answer += 1 * index;
			}
		}
		cout << answer << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
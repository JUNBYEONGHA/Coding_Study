#include <iostream>
#include <algorithm>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		string temp = s;
		reverse(s.begin(), s.end());
		int sum = stoi(temp) + stoi(s);
		s = to_string(sum);
		temp = s;
		reverse(s.begin(), s.end());
		bool check = false;
		for (int i = 0; i < s.size() ; i++)
		{
			if (s[i] != temp[i])
			{
				check = true;
				break;
			}
		}
		if (check)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
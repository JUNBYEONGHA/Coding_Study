#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	while (getline(cin , s))
	{
		if (s[0] == '#') break;
		int alpha[128] = {0,};
		for (int i = 0; i < s.size(); i++)
		{
			alpha[s[i]]++;
		}
		int result = 0;
		for (int i = 0; i < 26; i++)
		{
			if (alpha['A' + i] || alpha['a' + i])
			{
				result++;
			}
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
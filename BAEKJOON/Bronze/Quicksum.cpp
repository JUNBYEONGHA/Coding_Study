#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	while (1)
	{
		int sum = 0, i;
		string s;
		getline(cin, s);
		if (s == "#")
			break;
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] == 32)
				sum += 0 * (i + 1);
			else
				sum += (s[i] - 64) * (i + 1);
		}
		cout << sum << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
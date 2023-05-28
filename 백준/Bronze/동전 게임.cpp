#include <iostream>
#include <algorithm>
#include <queue>
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
		int result[8] = {0,};
		for (int i = 0; i < s.size() - 2; i++)
		{
			if (s[i] == 'T' && s[i + 1] == 'T' && s[i + 2] == 'T')
				result[0]++;
			else if (s[i] == 'T' && s[i + 1] == 'T' && s[i + 2] == 'H')
				result[1]++;
			else if (s[i] == 'T' && s[i + 1] == 'H' && s[i + 2] == 'T')
				result[2]++;
			else if (s[i] == 'T' && s[i + 1] == 'H' && s[i + 2] == 'H')
				result[3]++;
			else if (s[i] == 'H' && s[i + 1] == 'T' && s[i + 2] == 'T')
				result[4]++;
			else if (s[i] == 'H' && s[i + 1] == 'T' && s[i + 2] == 'H')
				result[5]++;
			else if (s[i] == 'H' && s[i + 1] == 'H' && s[i + 2] == 'T')
				result[6]++;
			else if (s[i] == 'H' && s[i + 1] == 'H' && s[i + 2] == 'H')
				result[7]++;
		}
		for (int i = 0; i < 8; i++)
		{
			cout << result[i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
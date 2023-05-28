#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s , result = "";
		cin >> s;
		int numbers[10] = { 0, };
		int i , j;
		for (i = s.size() - 1; i > 0; i--)
		{
			if (s[i - 1] < s[i])
			{
				for (j = i - 1; j < s.size(); j++)
				{
					numbers[s[j] - '0']++;
				}
				result += s.substr(0, i - 1);
				for (j = s[i - 1] - '0' + 1; j < 10; j++)
				{
					if (numbers[j] > 0)
					{
						numbers[j]--;
						result += (j + '0');
						break;
					}
				}
				for (j = 0; j < 10; j++)
				{
					while (numbers[j]--) 
					{
						result += (j + '0');
					}
				}
				break;
			}
		}
		if (i == 0)
		{
			result += "BIGGEST";
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
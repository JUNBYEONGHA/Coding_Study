#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

bool check[26];

void Answer()
{
	string alpha;
	while (getline(cin, alpha))
	{
		if (alpha.compare("*") == 0)
		{
			break;
		}
		else
		{
			for (int i = 0; i < 26; i++)
			{
				check[i] = false;
			}
			for (int i = 0; i < alpha.size(); i++)
			{
				check[alpha[i] - 'a'] = true;
			}
			int i;
			for (i = 0; i < 26; i++)
			{
				if (!check[i])
				{
					cout << 'N' << endl;
					break;
				}
			}
			if (i == 26)
				cout << 'Y' << endl;
		}

	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
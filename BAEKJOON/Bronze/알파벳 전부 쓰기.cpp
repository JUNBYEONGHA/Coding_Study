#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

bool check[26];

void Answer()
{
	int T;
	cin >> T;
	cin.ignore();
	string alpha;
	while (T--)
	{
		getline(cin, alpha);
		for (int i = 0; i < 26; i++)
		{
			check[i] = false;
		}
		for (int i = 0; i < alpha.size(); i++)
		{
			alpha[i] = tolower(alpha[i]);
			check[alpha[i] - 'a'] = true;
		}
		int i;
		bool programCheck = true;
		for (i = 0; i < 26; i++)
		{
			if (!check[i])
			{
				if (programCheck) cout << "missing ";
				cout << (char)(i + 'a');
				programCheck = false;
			}
		}
		if (programCheck)
			cout << "pangram" << endl;
		else
			cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
#include <iostream>
#include <string>
#define endl "\n"
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		int temp = 0;
		if (s[0] == 'P')
		{
			cout << "skipped" << endl;
		}
		else
		{
			string a = "";
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] == '+')
				{
					temp += stoi(a);
					a = "";
				}
				else
				{
					a += s[i];
				}
			}
			temp += stoi(a);
			cout << temp << endl;
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
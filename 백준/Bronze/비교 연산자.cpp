#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

string temp[2] = { "false" , "true" };

void Answer()
{
	int a, b;
	string s;
	for (int i = 1;; i++)
	{
		cin >> a >> s >> b;
		if (s.compare("E") == 0) break;
		if (s.size() == 1)
		{
			if (s.compare("<") == 0)
			{
				cout << "Case " << i << ": " << temp[(a < b)] << endl;
			}
			else
			{
				cout << "Case " << i << ": " << temp[(a > b)] << endl;
			}
		}
		else
		{
			if (s.compare("<=") == 0)
			{
				cout << "Case " << i << ": " << temp[(a <= b)] << endl;
			}
			else if (s.compare(">=") == 0)
			{
				cout << "Case " << i << ": " << temp[(a >= b)] << endl;
			}
			else if (s.compare("==") == 0)
			{
				cout << "Case " << i << ": " << temp[(a == b)] << endl;
			}
			else if (s.compare("!=") == 0)
			{
				cout << "Case " << i << ": " << temp[(a != b)] << endl;
			}
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
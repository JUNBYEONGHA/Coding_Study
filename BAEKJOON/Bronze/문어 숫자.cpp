#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	while (true)
	{
		cin >> s;
		if (s.compare("#") == 0) break;
		int result = 0 , eigth = 1;
		for (int i = s.size() - 1 ; i >= 0 ; i--)
		{
			int temp = 0;
			if (s[i] == '-') temp = 0;
			else if (s[i] == '\\')  temp = 1;
			else if (s[i] == '(')  temp = 2;
			else if (s[i] == '@')  temp = 3;
			else if (s[i] == '?')  temp = 4;
			else if (s[i] == '>')  temp = 5;
			else if (s[i] == '&')  temp = 6;
			else if (s[i] == '%')  temp = 7;
			else if (s[i] == '/')  temp = -1;
			result += temp * eigth;
			eigth *= 8;
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
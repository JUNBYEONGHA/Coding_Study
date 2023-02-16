#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	cin >> s;

	unsigned int value = 0;
	stringstream convert(s);
	if (s[0] == '0')
	{
		if (s[1] == 'x')
		{
			convert >> hex >> value;
		}
		else
		{
			convert >> oct >> value;
		}
	}
	else
	{
		convert >> dec >> value;
	}
	cout << dec << value;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;
int N;
int result = 0;
void Answer()
{
	cin >> N;
	while (N--)
	{
		string a;
		int b;
		cin >> a;
		if (a.compare("add") == 0)
		{
			cin >> b;
			result |= (1 << b);
		}
		else if (a.compare("remove") == 0)
		{
			cin >> b;
			result &= ~(1 << b);
		}
		else if (a.compare("check") == 0)
		{
			cin >> b;
			if (result & (1 << b))
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (a.compare("toggle") == 0)
		{
			cin >> b;
			result ^= (1 << b);
		}
		else if (a.compare("all") == 0)
		{
			result = (1 << 21) - 1;
		}
		else if (a.compare("empty") == 0)
		{
			result = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
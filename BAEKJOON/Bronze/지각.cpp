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
		int s = 0, t = 0,n;
		cin >> n;
		while (1)
		{
			if (n < s + t) { t--; break; }
			t++;
			s = t * t;
		}
		cout << t << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
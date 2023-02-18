#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int a, b ,c;
		char o , temp;
		cin >> a >> o >> b >> temp >> c;
		if (o == '+')
		{
			if (a + b == c) cout << "Case " << i << ": YES" << endl;
			else cout << "Case " << i << ": NO" << endl;
		}
		else
		{
			if (a - b == c) cout << "Case " << i << ": YES" << endl;
			else cout << "Case " << i << ": NO" << endl;
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
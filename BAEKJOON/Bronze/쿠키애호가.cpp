#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int cookie, eat;
		cin >> cookie >> eat;
		if (cookie % eat == 0)
		{
			cout << cookie / eat << endl;
		}
		else
		{
			cout << cookie / eat + 1 << endl;
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
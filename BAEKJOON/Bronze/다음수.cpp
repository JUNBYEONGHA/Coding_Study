#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	while (true)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a != 0 && b != 0 && c != 0 && c % b == 0 && b % a == 0 )
		{
			cout << "GP " << c * (b / a) << endl;
		}
		else
		{
			cout << "AP " << c + (b - a) << endl;
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
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	double H, P;
	while (cin >> H >> P)
	{
		cout.precision(2);
		cout << fixed << H / P << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
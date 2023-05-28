#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long a, b;
		cin >> a >> b;
		cout << "Scenario #"<< i + 1 <<":" << endl;
		cout << (a + b) * (b - a + 1) / 2 << endl << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
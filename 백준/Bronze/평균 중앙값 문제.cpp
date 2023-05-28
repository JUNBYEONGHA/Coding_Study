#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int a, b;
	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << 2 * a - b << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

void Answer()
{
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		int a; cin >> a;
		if (a < 40) a = 40;
		result += a;
	}
	cout << result / 5;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	LL N;
	cin >> N;
	LL result = N;
	while (N--)
	{
		if (N == 0) break;
		result *= N;
	}
	if (result == 0) result = 1;
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
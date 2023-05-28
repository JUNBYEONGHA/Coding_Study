#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	long long n;
	cin >> n;
	if (n % 2 == 1) cout << "SK";
	else cout << "CY";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
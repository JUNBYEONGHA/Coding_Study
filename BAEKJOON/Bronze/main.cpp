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
    LL a, b;
    LL sum = 0;
    cin >> a >> b;
    if (a < b)
        sum = b * (b + 1) / 2 - (a) * (a - 1) / 2;
    else
        sum = a * (a + 1) / 2 - (b) * (b - 1) / 2;
    cout << sum ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
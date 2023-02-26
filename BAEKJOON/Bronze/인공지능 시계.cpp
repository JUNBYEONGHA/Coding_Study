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
	int h, m, s, d;
	cin >> h >> m >> s >> d;
	cout << (h + (m + (s + d) / 60) / 60) % 24 << " " <<  (m + (s + d) / 60) % 60 << " " << (s + d) % 60;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
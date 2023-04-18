#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	string s; cin >> s;
	if (s[0] == 'E') cout << "I";
	else cout << "E";
	if (s[1] == 'S') cout << "N";
	else cout << "S";
	if (s[2] == 'T') cout << "F";
	else cout << "T";
	if (s[3] == 'J') cout << "P";
	else cout << "J";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
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
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	string s;
	cin >> s;
	if (s[0] == 'S') cout << "HIGHSCHOOL";
	else if (s[0] == 'C') cout << "MASTER";
	else if (s[0] == '2') cout << "0611";
	else cout << "CONTEST";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
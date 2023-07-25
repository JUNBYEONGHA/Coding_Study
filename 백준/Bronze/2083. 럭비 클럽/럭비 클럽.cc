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
	int age, weight;
	while (cin >> s >> age >> weight)
	{
		if (s == "#" && age == 0 && weight == 0)
		{
			break;
		}
		cout << s << " ";
		if (age > 17 || weight >= 80)
		{
			cout << "Senior" << endl;
		}
		else
		{
			cout << "Junior" << endl;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
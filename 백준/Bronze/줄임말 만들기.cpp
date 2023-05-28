#include <iostream>
#include <algorithm>
#include <set>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

string s;
set<string> st = { "a", "ali", "i" , "ili", "nego", "ni", "niti", "no", "pa", "te" };

void Answer()
{
	cin >> s; cout << (char)toupper(s[0]);
	while (cin >> s) {
		if (st.find(s) == st.end()) cout << (char)toupper(s[0]);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
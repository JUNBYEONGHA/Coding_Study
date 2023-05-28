#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v1(26);
		vector<int> v2(26);
		string str1, str2;
		int res = 0;

		cin >> str1 >> str2;

		for (int i = 0; i < str1.size(); i++)
			v1[str1.at(i) - 'a']++;

		for (int i = 0; i < str2.size(); i++)
			v2[str2.at(i) - 'a']++;

		bool check = true;
		for (int i = 0; i < 26; i++)
			if (v1[i] != v2[i]) check = false;
		if (check) cout << str1 << " & " << str2 << " are anagrams." << endl;
		else cout << str1 << " & " << str2 << " are NOT anagrams." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
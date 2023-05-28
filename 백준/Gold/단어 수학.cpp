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

int alpha[26];

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int pow = 1;
		for (int i = s.size() - 1 ; i >= 0 ; i--)
		{ 
			alpha[s[i] - 'A'] += pow;
			pow *= 10;
		}
	}
	sort(alpha, alpha + 26, greater<int>());
	
	int num = 9; int result = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == 0) break;
		result += alpha[i] * num--;
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
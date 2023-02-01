#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int abc[3];
	cin >> abc[0] >> abc[1] >> abc[2];
	sort(abc , abc + 3);
	string s;
	cin >> s;
	cout << abc[s[0] - 'A'] << " " << abc[s[1] - 'A'] << " " << abc[s[2] - 'A'];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
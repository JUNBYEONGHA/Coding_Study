#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;


void Answer()
{
	string str, token;
	getline(cin, str); getline(cin, token);
	int cnt = 0; int start = 0;
	while (str.find(token) != string::npos)
	{
		int firstCharPos = str.find(token); cnt++;
		str = str.substr(firstCharPos + token.length(), str.length());
	}
	cout << cnt << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
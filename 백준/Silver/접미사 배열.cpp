#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<set>
#include<algorithm>
#define endl "\n"
using namespace std;



void Answer()
{
	string s;
	cin >> s;
	set<string> S;
	string temp = "";
	for (int i = s.size() - 1; i >= 0; i--)
	{
		temp = s[i] + temp;
		S.insert(temp);
	}
	for (auto i = S.begin(); i != S.end(); i++)
	{
		cout << *i << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	while (true)
	{
		getline(cin, s);
		if (s.compare("END") == 0) break;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			cout << s[i];
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	cin >> s;
	int result = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ',')
			result++;
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
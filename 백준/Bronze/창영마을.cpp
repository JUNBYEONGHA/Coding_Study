#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	cin >> s;
	int moveball[3] = { 1, };

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			swap(moveball[0], moveball[1]);
		}
		else if (s[i] == 'B')
		{
			swap(moveball[1], moveball[2]);
		}
		else
		{
			swap(moveball[0], moveball[2]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (moveball[i] == 1) cout << i + 1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
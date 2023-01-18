#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		string pangram;
		getline(cin, pangram);
		int pangramcheck[128] = { 0, };
		for (int j = 0; j < pangram.size(); j++)
		{
			pangram[j] = toupper(pangram[j]);
		}
		for (int j = 0; j < pangram.size(); j++)
		{
			pangramcheck[pangram[j]]++;
		}
		int check = 3;
		for (int i = 65; i <= 90; i++)
		{
			check = min(check , pangramcheck[i]);
		}
		if (check >= 3)
		{
			cout << "Case " << i << ": Triple pangram!!!" << endl;
		}
		else if (check >= 2)
		{
			cout << "Case " << i << ": Double pangram!!" << endl;
		}
		else if (check >= 1)
		{
			cout << "Case " << i << ": Pangram!" << endl;
		}
		else
		{
			cout << "Case " << i << ": Not a pangram" << endl;
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
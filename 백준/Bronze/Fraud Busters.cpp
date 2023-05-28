#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	string key;
	cin >> key;
	int n;
	cin >> n;
	vector<string> scan;
	while (n--)
	{
		string code;
		cin >> code;
		int i;
		for (i = 0; i < key.size(); i++)
		{
			if (key[i] != '*' && key[i] != code[i]) break;
		}
		if (i == key.size()) scan.push_back(code);
	}
	cout << scan.size() << endl;
	for (int i = 0; i < scan.size(); i++)
	{
		cout << scan[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
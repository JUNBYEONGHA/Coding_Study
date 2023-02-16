#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	vector <string> names;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		names.push_back(s);
	}
	bool asc = true , des = true;
	string temp = names[0];
	for (int i = 1; i < n; i++)
	{
		if (temp > names[i])
		{
			asc = false;
			break;
		}
		temp = names[i];
	}
	temp = names[0];
	for (int i = 1; i < n; i++)
	{
		if (temp < names[i])
		{
			des = false;
			break;
		}
		temp = names[i];
	}
	if (asc) cout << "INCREASING";
	else if (des) cout << "DECREASING";
	else cout << "NEITHER";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
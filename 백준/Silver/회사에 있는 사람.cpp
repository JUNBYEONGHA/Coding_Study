#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

set<string , greater<string>> record;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		string name, state;
		cin >> name >> state;
		if (state.compare("enter") == 0)
		{
			record.insert(name);
		}
		else
		{
			record.erase(record.find(name));
		}
	}
	for (auto iter = record.begin(); iter != record.end(); iter++)
	{
		cout << *iter << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
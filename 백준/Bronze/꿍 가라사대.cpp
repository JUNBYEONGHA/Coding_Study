#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	cin.ignore();
	while (N--)
	{
		string s;
		getline(cin, s);

		auto t = s.find("Simon says");
		if (t == string::npos)
		{
			continue;
		}
		else
		{
			cout << s.substr(t + 10) << endl;
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
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	string proviso, hint;
	cin >> proviso >> hint;
	int cnt = 0;
	while (proviso.find(hint) != string::npos)
	{
		cnt++;
		proviso = proviso.substr(proviso.find(hint) + hint.size());
	}
	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
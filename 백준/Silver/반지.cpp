#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	string origin;
	int N, res = 0;

	cin >> origin;
	cin >> N;

	while (N--) {
		string tmp;
		cin >> tmp;
		tmp += tmp;
		if (tmp.find(origin) != string::npos)
			res++;
	}

	cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
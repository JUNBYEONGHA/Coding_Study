#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n, m;
	cin >> n >> m;
	string str = "";

	for (int i = 0; i < n; i++) {
		str = str + to_string(n);
	}
	if (str.length() > m) {
		cout << str.substr(0, m);
	}
	else {
		cout << str;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
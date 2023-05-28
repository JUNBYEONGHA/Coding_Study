#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int N;
	cin >> N;
	string str;
	cin >> str;
	int res = N + 1;
	int lCnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'L') {
			lCnt++;
		}
	}
	if (lCnt == 0) res = N;
	else res -= (lCnt / 2);
	cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
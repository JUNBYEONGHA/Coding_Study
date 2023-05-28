#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		string str;
		cin >> n;
		vector<string> v;
		map<string, int> book;

		for (int i = 0; i < n; i++) {
			cin >> str;
			v.push_back(str); // 사전에서 찾기 위해서 
			book[str] = 1; // 사전에 저장 
		}

		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (!flag) break;

			string temp = "";
			for (int j = 0; j < v[i].length(); j++) {
				temp += v[i][j];
				if (book[temp] == 1 && temp != v[i]) {
					flag = false;
					break;
				}
			}
		}

		if (flag) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
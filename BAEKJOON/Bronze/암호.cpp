#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

char map[20][200];
void Answer()
{
    int n;
	int c = 0;
	int cycle;
	bool flag = false;
	string s;
	string result = "";
 
	cin >> n;
	cin >> s;

	cycle = (s.length() + n - 1) / n;
 
	for (int i = 0; i < cycle; ++i) {
		if (!flag) {
			for (int j = 0; j < n; ++j) {
				map[i][j] = s[c++];
			}
		}
		else {
			for (int j = n - 1; j >= 0; --j) {
				map[i][j] = s[c++];
			}
		}
		flag = !flag;
	}
 
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < cycle; ++j) {
			result += map[j][i];
		}
	}
 
	cout << result << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

#define endl "\n"
using namespace std;

void Answer()
{
	bool flag;
	char v[5] = { 'a', 'i', 'o', 'e', 'u' };
	string s;
	string result;

	while (1) {
		flag = false;
		result = "";

		cin >> s;

		if (s == "#") {
			return ;
		}

		for (int i = 0; i < s.length(); ++i) {
			for (int j = 0; j < 5; ++j) {
				if (s[i] == v[j]) {
					flag = true;
					break;
				}
			}
			if (flag) {
				result = s.substr(i, s.length() - i) + s.substr(0, i);
				break;
			}
		}
		result += "ay";

		if (flag) {
			cout << result << endl;
		}
		else {
			cout << s + "ay" << endl;
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
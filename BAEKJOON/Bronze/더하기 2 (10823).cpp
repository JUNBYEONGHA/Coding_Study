#include <iostream>
#include <vector>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	string str;
	string cur;
	int res = 0;
	while (getline(cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != ',') cur += str[i];
			else {
				res += stoi(cur);
				cur = "";
			}
		}
	}
	res += stoi(cur);
	cout << res;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}

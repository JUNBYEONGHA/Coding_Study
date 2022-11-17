#include <iostream>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	string str;
	getline(cin, str);
	int length = str.length();

	vector <string> s(length);

	for (int i = 0; i < str.length(); i++) s[i] = str[i];

	auto iter = s.begin();
	while (iter < s.end()) {
		if (*iter == "a" || *iter == "e" || *iter == "i" || *iter == "o" || *iter == "u") {
			iter++;
			iter = s.erase(iter);
			iter = s.erase(iter);
		}
		else iter++;
	}
	for (int i = 0; i < s.size(); i++) cout << s[i];
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}

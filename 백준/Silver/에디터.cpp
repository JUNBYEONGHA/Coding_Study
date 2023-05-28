#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{	
	string str;
	list<char> L;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		L.push_back(str.at(i));
	}

	int N;
	list<char>::iterator cur = L.end();

	cin >> N;


	for (int i = 0; i < N; i++) {

		char c;
		cin >> c;

		if (c == 'L') {
			if (cur != L.begin()) cur--;
		}

		else if (c == 'D') {
			if (cur != L.end()) cur++;
		}

		else if (c == 'B') {
			if (cur != L.begin())
				cur = L.erase(--cur);
		}

		else if (c == 'P') {
			char s;
			cin >> s;
			L.insert(cur, s);
		}

	}

	for (list<char>::iterator it = L.begin(); it != L.end(); it++) {
		cout << *it;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
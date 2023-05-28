#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

#define endl "\n"
using namespace std;	

string str;
int n;

bool isPalin(int idx) {
    int half = (n - idx) / 2;
    for (int i = 0; i < half; i++) {
        if (str[idx + i] != str[n - 1 - i]) return false;
    }
    return true;
}

void Answer()
{
	cin >> str;
	n = str.size();

	for (int i = 0; i < n; i++) {
		if (isPalin(i)) {
			cout << n + i;
			return ;
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
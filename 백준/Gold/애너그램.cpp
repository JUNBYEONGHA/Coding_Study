#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

bool cmp(char a, char b) {
    return a < b;
}

int N;

void Answer()
{
    cin >> N;
    while (N--) {
        string str;
        cin >> str;
        int len = str.size();
        sort(str.begin(), str.end());

        do {
            cout << str << endl;
        } while (next_permutation(str.begin(), str.end(), cmp));
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
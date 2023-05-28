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

bool check;
void Answer()
{
    string N; cin >> N;
    int tempLeft = 1;
    for (int i = 0; i < N.length() - 1; i++) {
        int tempRight = 1;
        tempLeft *= (N[i] - '0');
        for (int k = i + 1; k < N.length(); k++) {
            tempRight *= (N[k] - '0');
        }
        if (tempLeft == tempRight) {
            check = true;
            break;
        }
    }
    if (check) cout << "YES";
    else cout << "NO";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
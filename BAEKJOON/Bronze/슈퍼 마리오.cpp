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
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int afterSum = sum + a[i];
        if (afterSum >= 100) {
            if (afterSum - 100 <= 100 - sum) {
                cout << afterSum;
            }
            else {
                cout << sum;
            }
            return;
        }
        sum = afterSum;
    }
    cout << sum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

int n, maxLength;
vector <int> nums;

void Answer()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int secondNum = i;
        int nextNum = n - secondNum;
        int length = 3;
        vector<int> v = { n, secondNum, nextNum };

        while (1) {
            int tmp = nextNum;
            nextNum = secondNum - nextNum;
            if (nextNum < 0) break;
            secondNum = tmp;
            length++;
            v.push_back(nextNum);
        }

        if (maxLength < length) nums = v, maxLength = length;
    }
    cout << maxLength << '\n';
    for (auto e : nums) cout << e << ' ';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
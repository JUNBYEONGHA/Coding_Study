#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
    long long result = 0, overflow = 0;
    int n;

    for (int test_case = 0; test_case < 3; test_case++) {
        std::cin >> n;

        result = 0;
        overflow = 0;

        for (int i = 0; i < n; i++) {
            long long tmp;
            std::cin >> tmp;

            if (result > 0 and tmp > 0 and tmp > LLONG_MAX - result) {
                overflow += 1;
            }

            if (result < 0 and tmp < 0 and tmp < LONG_MIN - result) {
                overflow -= 1;
            }

            result += tmp;
        }

        if (overflow < 0) {
            std::cout << "-\n";
        }
        else if (overflow > 0) {
            std::cout << "+\n";
        }
        else if (result == 0) {
            std::cout << "0\n";
        }
        else if (result < 0) {
            std::cout << "-\n";
        }
        else if (result > 0) {
            std::cout << "+\n";
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
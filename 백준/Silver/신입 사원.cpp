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

void Answer()
{
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;

        vector<pair<int, int>> grades;

        for (auto i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;
            grades.push_back({ x,y });
        }

        sort(grades.begin(), grades.end());

        int temp = 0;
        int result = 1;

        for (auto i = 1; i < N; i++) {
            if (grades[temp].second > grades[i].second) {
                result++;
                temp = i;
            }
        }
        cout << result << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
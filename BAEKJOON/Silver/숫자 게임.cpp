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
vector<int> v, arr;
vector<pair<int, int>> res;
void Answer()
{
    int n;
    cin >> n;
    for (int cnt = 0; cnt < n; cnt++)
    {
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        for (int i = 0; i < 3; i++)
        {
            int max = 0;
            for (int j = i + 1; j < 4; j++)
                for (int k = j + 1; k < 5; k++)
                    arr.push_back((v[i] + v[j] + v[k]) % 10);
        }
        sort(arr.rbegin(), arr.rend());
        res.push_back({ arr[0],cnt + 1 });
        arr.clear();
        v.clear();
    }
    sort(res.rbegin(), res.rend());
    cout << res[0].second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
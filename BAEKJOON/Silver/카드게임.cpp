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
    int ans = 0;

    vector<pair<int, char>> card;
    int cnt[10] = { 0, };
    string buf;
    int maxNum = 0;
    for (int i = 0; i < 5; ++i)
    {
        getline(cin, buf);
        char c = buf[0];
        int n = buf[2] - '0';
        card.push_back({ n,c }); //¼ýÀÚ, »ö±ò
        maxNum = max(maxNum, n);
        cnt[n]++;
    }



    int colorCheck = 1;
    int seqCheck = 1;
    sort(card.begin(), card.end());
    char c = card[0].second;
    for (int i = 1; i < 5; ++i)
    {
        if (c != card[i].second)
            colorCheck = 0;
        if (card[i].first != card[i - 1].first + 1)
            seqCheck = 0;
    }
    if (colorCheck)
        ans = max(ans, 600 + maxNum);
    if (seqCheck)
        ans = max(ans, 500 + maxNum);
    if (colorCheck && seqCheck)
        ans = max(ans, 900 + maxNum);

    vector<pair<int, int>> v;
    for (int i = 1; i <= 9; ++i)
        if (cnt[i])
            v.push_back({ cnt[i],i });
    sort(v.begin(), v.end(), greater<pair<int, int>>());

    if (v[0].first >= 4)
        ans = max(ans, v[0].second + 800);
    else if (v[0].first == 3)
    {
        if (v[1].first == 2)
            ans = max(ans, v[0].second * 10 + v[1].second + 700);
        else
            ans = max(ans, v[0].second + 400);
    }
    else if (v[0].first == 2)
    {
        if (v[1].first == 2)
        {
            int m = max(v[0].second, v[1].second);
            int n = min(v[0].second, v[1].second);
            ans = max(ans, m * 10 + n + 300);

        }
        else
            ans = max(ans, v[0].second + 200);
    }
    else
        ans = max(ans, maxNum + 100);

    cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
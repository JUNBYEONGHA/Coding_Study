#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int N, L, start, end;
    cin >> N >> L;
    vector<pair<int, int>> v;

    for (int i = 0; i < N; ++i) {
        cin >> start >> end;
        v.push_back(pair<int, int>(start, end));
    }

    sort(v.begin(), v.end());

    int count = 0;
    int upcnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first > upcnt)
            upcnt = v[i].first;

        while (upcnt < v[i].second) {
            upcnt += L;
            count++;
        }
    }
    cout << count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
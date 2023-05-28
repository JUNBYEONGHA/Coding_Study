#include<iostream>
#include<queue>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
    int count = 0;
    int test_case;
    cin >> test_case;
    int n, m, ipt;
    for (int i = 0; i < test_case; ++i) {
        count = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq; 
        for (int j = 0; j < n; ++j) {
            cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);
        }
        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                ++count;
                if (index == m) {
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });
        }
    }
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
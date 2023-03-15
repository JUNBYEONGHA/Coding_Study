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

vector<int> used(101, false);
vector<int> order;
vector<int> plug;
int N, K;

int get_min(int idx) {
    //return index for removing in plug
    int r = 0;
    for (int i = 0; i < plug.size(); i++) {
        int t = 100;
        for (int j = idx; j < order.size(); j++) {
            if (order[j] == plug[i]) 
            {
                t = j;
                break;
            }
        }
        // �߰ߵ��� ���� ���
        if (t == 100) return i;
        else r = max(r, t);
    }
    for (int i = 0; i < plug.size(); i++) {
        if (plug[i] == order[r])
            return i;
    }

}


void Answer()
{
    int answer = 0;
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        int in; cin >> in;
        order.push_back(in);
    }

    for (int i = 0; i < order.size(); i++) {
        int cur = order[i];
        //�̹� ������� ��� 
        if (used[cur]) {
            continue;
        }
        else {
            //�÷��װ� ���� ���
            if (plug.size() >= N) {
                answer++;
                int low = get_min(i);

                used[plug[low]] = false;
                plug.erase(plug.begin() + low);
            }
            plug.push_back(cur);
            used[cur] = true;
        }
    }
    cout << answer << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
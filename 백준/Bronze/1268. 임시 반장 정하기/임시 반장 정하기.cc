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

bool visited[1001];
int max_duplic = -1;
int ans;

void Answer()
{
    int n; cin >> n;
    vector<vector<int>>v(n + 1, vector<int>(n + 1));

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 5; k++) {
            cin >> v[i][k];
        }
    }

    for (int a = 0; a < n; a++) {    
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        for (int b = 0; b < 5; b++) { 
            int peo_class = v[a][b];
            for (int c = 0; c < n; c++) {    
                if (a != c && peo_class == v[c][b]) {
                    if (!visited[c]) {
                        visited[c] = 1;
                        cnt++;
                    }
                }
            }
        }
        if (max_duplic < cnt) {
            max_duplic = cnt;
            ans = a + 1;
        }
    }
    cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
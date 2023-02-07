#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;
long long A, B, S;
int T;
bool prime[2000001];
vector<int> v;

void Answer()
{
    prime[1] = 1;
    for (int i = 2; i * i < 2000000; i++) {
        if (!prime[i])
            for (int j = i * i; j < 2000000; j += i)
                prime[j] = true;
    }

    for (int i = 2; i <= 2000000; i++)
        if (!prime[i])
            v.push_back(i);

    cin >> T;
    while (T--) {
        cin >> A >> B;
        S = A + B;

        if (S == 2 || S == 3) {
            cout << "NO" << endl;
        }
        else if (S % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            S -= 2;
            bool check = false;
            for (int i = 0; i < v.size() && (long long)v[i] * v[i] <= S; i++)
                if (S % v[i] == 0) {
                    cout << "NO" << endl;
                    check = true;
                    break;
                }
            if (!check) cout << "YES" << endl;
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
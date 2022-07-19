#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    long long s;
    cin >> s;

    long long total = 0;
    long long temp;

    for (auto i = 1; i < 1e9; i++) {
        total += i;
        if (total >= s) {
            temp = i;
            break;
        }
    }
    if (total == s)
        cout << temp;
    else
        cout << temp - 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
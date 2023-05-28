#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

long long n, t = 2432902008176640000LL;
void Answer()
{
    cin >> n;
    if (!n) n = -1;
    for (int i = 20; i; i--) {
        t /= i;
        if (n >= t) n -= t;
    }
    puts(n ? "NO" : "YES");
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
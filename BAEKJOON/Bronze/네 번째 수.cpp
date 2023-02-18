#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl "\n"
using namespace std;
int a[3], d, d2;
void Answer()
{
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a, a + 3);
    int d = a[1] - a[0];
    int d2 = a[2] - a[1];
    if (d > d2) cout << a[0] + d2;
    else if (d == d2) cout << a[2] + d;
    else cout << a[1] + d;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
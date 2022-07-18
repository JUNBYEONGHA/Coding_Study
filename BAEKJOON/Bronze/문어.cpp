#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
    int n;
    cin >> n;
    int odd = 0;
    if (n % 2 == 1) { odd = 1; n--; }
    while (n) {
        if (n % 2 == 0) { cout << "1 "; }
        else { cout << "2 "; }
        n--;
    }
    if (odd) { cout << "3"; }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
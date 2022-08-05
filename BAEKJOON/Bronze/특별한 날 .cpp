#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{

    int a, b;
    cin >> a >> b;

    if (a == 2) {
        if (b == 18) {
            cout << "Special";
        }
        else if (b > 18) {
            cout << "After";
        }
        else cout << "Before";
    }

    else if (a > 2) {
        cout << "After";
    }

    else cout << "Before";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
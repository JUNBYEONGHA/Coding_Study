#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{

    int a[10];
    int b[10];

    int aw = 0, bw = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            aw++;
        }
        else if (b[i] > a[i]) {
            bw++;
        }

    }
    if (aw > bw) cout << "A";
    else if (bw > aw) cout << "B";
    else cout << "D";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
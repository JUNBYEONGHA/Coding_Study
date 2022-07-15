#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a[1001] = { 0, };
    int n;
    int sum = 0, max = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        sum += n;
        a[n / 10]++;
    }

    for (int i = 0; i < 100; i++) {
        if (a[i] > max)
            max = i;
    }
    cout << sum / 10 << endl << max * 10;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, m = 100, M = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            m = min(m, a);
            M = max(M, a);
        }
        cout << (M - m) * 2 << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
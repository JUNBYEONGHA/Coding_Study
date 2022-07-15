#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int n;
        cin >> n;
        int q, p;
        for (int i = 0; i < n; i++)
        {
            cin >> q >> p;
            s += q * p;
        }
        cout << s << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
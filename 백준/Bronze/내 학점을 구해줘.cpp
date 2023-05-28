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
        int n;
        cin >> n;
        int c , C = 0 ;
        double g ,G = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> g;
            C += c;
            G += g * c;
        }
        cout << fixed;
        cout.precision(1);
        cout << C << " " << G / (double)C << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
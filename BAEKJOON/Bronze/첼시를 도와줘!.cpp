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
        int A, D = 0;
        string B, C;
        for (int i = 0; i < n; i++)
        {
            cin >> A >> B;
            if (D < A)
            {
                C = B;
                D = A;
            }
        }
        cout << C << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
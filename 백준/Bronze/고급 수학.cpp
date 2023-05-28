#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A < B)
        {
            int temp = B;
            B = A;
            A = temp;
        }
        if (A < C)
        {
            int temp = C;
            C = A;
            A = temp;
        }
        if (pow(A,2) == pow(B,2) + pow(C,2))
        {
            cout << "Scenario #" << i << ":" << endl;
            cout << "yes" << endl << endl;
        }
        else
        {
            cout << "Scenario #" << i << ":" << endl;
            cout << "no" << endl << endl;
        }
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    while (N--)
    {
        int A , B;
        cin >> A >> B;
        cout << B + 2 - A << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
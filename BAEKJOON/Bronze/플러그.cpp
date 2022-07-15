#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n ,A, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A;
        result += A;
    }
    cout << result - n  + 1 ; 
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
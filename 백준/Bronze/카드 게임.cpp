#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int A, result = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> A;
        result += A;
    }
    cout << result ; 
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
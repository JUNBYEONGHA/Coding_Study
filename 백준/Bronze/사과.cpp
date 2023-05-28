#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n;
    cin >> n;
    
    int A, B, result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A >> B;
        result += B - A * (B / A);
    }
    cout << result;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
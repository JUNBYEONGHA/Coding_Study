#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
            sum += j + i;
    }
    cout << sum << endl;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
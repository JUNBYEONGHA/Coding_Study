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
        int a, b, index = 0;
        cin >> b;
        while (b)
        {
            if (b % 2 == 1) cout << index << " ";
            b /= 2;
            index++;
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
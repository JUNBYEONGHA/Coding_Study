#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int n , a , result = 0;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (n == a)
            result++;
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
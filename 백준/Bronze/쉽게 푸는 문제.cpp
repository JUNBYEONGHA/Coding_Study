#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a, b, res = 0, cnt = 1;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (cnt >= a && b >= cnt)
                res += i;
            cnt++;
        }
    }
    cout << res;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
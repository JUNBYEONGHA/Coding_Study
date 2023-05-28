#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int M, N, m = 1000000, S = 0;
    cin >> M >> N;
    for (int i = 1; i * i <= N; i++)
    {
        if (i * i >= M)
        {
            m = min(m, i * i);
            S += i * i;
        }
    }
    if (S == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << S << endl << m << endl;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
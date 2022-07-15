#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int N, A, score = 1, s = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        s += A * score;
        if (A == 0) score = 1;
        else score++;
    }
    cout << s;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
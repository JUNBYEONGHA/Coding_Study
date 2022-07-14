#include<iostream>
#include<algorithm>
#include<cmath>
#define endl "\n"
using namespace std;

long long arr[1000001];

void Answer()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int A, B;
    cin >> A >> B;
    long long answer = 0;
    for (int i = 0; i < N; i++)
    {
        long long temp  = arr[i] - A;
        answer += 1;
        if (temp > 0)
        {
            answer += temp / B;
            if (temp % B > 0) answer++;
        }
    }
    cout << answer;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
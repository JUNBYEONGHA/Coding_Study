#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    long long sum = 1;
    int sumcount = 0;
    while (N != 0)
    {
        if (N < sum)
        {
            sum = 1;
        }
        N -= sum;
        sum++;
        sumcount++;
    }
    cout << sumcount;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
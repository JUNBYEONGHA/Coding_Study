#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    long long N;
    cin >> N;

    long long result = (N - 1) * N / 2;
    result *= (N + 1);

    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
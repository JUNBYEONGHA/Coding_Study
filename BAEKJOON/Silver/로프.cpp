#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int rope[100001];

void Answer()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> rope[i];
    }
    sort(rope, rope + N, greater<int>());

    long long result = 0;
    for (int i = 0; i < N; i++) {
        long long sum = rope[i] * (i + 1);
        if (sum > result)
            result = sum;
    }
    cout << result;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
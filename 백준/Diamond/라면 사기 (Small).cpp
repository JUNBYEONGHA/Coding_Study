#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int Ramen[10010];

void Answer()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Ramen[i];
    }
    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        if (Ramen[i + 1] > Ramen[i + 2])
        {
            int buycount5 = min(Ramen[i], Ramen[i + 1] - Ramen[i + 2]);
            answer += 5 * buycount5;

            Ramen[i] -= buycount5;
            Ramen[i + 1] -= buycount5;

            int buycount7 = min(Ramen[i], min(Ramen[i + 1], Ramen[i + 2]));
            answer += 7 * buycount7;

            Ramen[i] -= buycount7;
            Ramen[i + 1] -= buycount7;
            Ramen[i + 2] -= buycount7;
        }
        else
        {
            int buycount7 = min(Ramen[i], min(Ramen[i + 1], Ramen[i + 2]));
            answer += 7 * buycount7;

            Ramen[i] -= buycount7;
            Ramen[i + 1] -= buycount7;
            Ramen[i + 2] -= buycount7;

            int buycount5 = min(Ramen[i],Ramen[i + 1]);
            answer += 5 * buycount5;

            Ramen[i] -= buycount5;
            Ramen[i + 1] -= buycount5;
        }
        answer += 3 * Ramen[i];
        Ramen[i] = 0;
    }
    cout << answer;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
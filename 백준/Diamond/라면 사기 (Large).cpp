#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

long long Ramen[1000010];

void Answer()
{
    long long N , B , C;
    cin >> N >> B >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> Ramen[i];
    }
    long long answer = 0;

    if (B < C)
    {
        for (int i = 0; i < N; i++)
        {
            answer += Ramen[i];
        }
        cout << answer * B;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (Ramen[i + 1] > Ramen[i + 2])
        {
            long long buycount2 = min(Ramen[i], Ramen[i + 1] - Ramen[i + 2]);
            answer += (B + C) * buycount2;

            Ramen[i] -= buycount2;
            Ramen[i + 1] -= buycount2;

            long long buycount3 = min(Ramen[i], min(Ramen[i + 1], Ramen[i + 2]));
            answer += (B + 2 * C) * buycount3;

            Ramen[i] -= buycount3;
            Ramen[i + 1] -= buycount3;
            Ramen[i + 2] -= buycount3;
        }
        else
        {
            long long buycount3 = min(Ramen[i], min(Ramen[i + 1], Ramen[i + 2]));
            answer += (B + 2 * C) * buycount3;

            Ramen[i] -= buycount3;
            Ramen[i + 1] -= buycount3;
            Ramen[i + 2] -= buycount3;

            long long buycount2 = min(Ramen[i],Ramen[i + 1]);
            answer += (B + C) * buycount2;

            Ramen[i] -= buycount2;
            Ramen[i + 1] -= buycount2;
        }
        answer += B * Ramen[i];
        Ramen[i] = 0;
    }
    cout << answer;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
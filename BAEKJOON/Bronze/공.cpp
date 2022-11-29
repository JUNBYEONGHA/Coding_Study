#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

int ball[4];
void Answer()
{
    int M;
    cin >> M;
    ball[1] = 1;
    for (int i = 0; i < M; i++)
    {
        int X, Y;
        cin >> X >> Y;
        int temp = ball[X];
        ball[X] = ball[Y];
        ball[Y] = temp;
    }
    for (int i = 1; i < 4; i++)
    {
        if (ball[i] == 1)
        {
            cout << i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
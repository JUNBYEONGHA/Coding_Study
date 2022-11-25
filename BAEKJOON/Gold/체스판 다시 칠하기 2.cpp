#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#define endl "\n"
using namespace std;

char board[2001][2001];
int boardsum[2001][2001];
int N, M, K;

int coloring(char color)
{
    memset(boardsum, 0, sizeof(boardsum));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int value = 0;
            if ((i + j) % 2 == 0)
            {
                value = (board[i][j] != color );
            }
            else
            {
                value = (board[i][j] == color );
            }
            boardsum[i + 1][j + 1] = (boardsum[i][j + 1] + boardsum[i + 1][j] - boardsum[i][j] + value);
        }
    }
    int recolor = 1000000000;
    for (int i = 1; i < N - K + 2 ; i++)
    {
        for (int j = 1; j < M - K + 2; j++)
        {
            recolor = min(recolor,
                boardsum[i + K - 1][j + K - 1] - boardsum[i + K - 1][j - 1] - boardsum[i - 1][j + K - 1] + boardsum[i - 1][j - 1]);
        }
    }
    return recolor;
}

void Answer()
{
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
    cout << min(coloring('W'), coloring('B'));
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
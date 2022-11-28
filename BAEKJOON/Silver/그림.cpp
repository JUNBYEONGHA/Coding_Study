#include <iostream>
#include <queue>

#define endl "\n"
using namespace std;

int paper[501][501];
bool visit[501][501];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
int N, M;


int BFS(int x,int y)
{
    queue<pair<int, int>> q;
    visit[x][y] = true;
    int drawcount = 1;
    q.push({ x,y });
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (visit[nx][ny] || paper[nx][ny] == 0) continue;
            visit[nx][ny] = true;
            q.push({ nx, ny });
            drawcount++;
        }
    }
    return drawcount;
}

void Answer()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> paper[i][j];
        }
    }
    int drawcount = 0 , drawmax = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (paper[i][j] == 1 && visit[i][j] == false)
            {
                drawmax = max(drawmax ,BFS(i,j));
                drawcount++;
            }
        }
    }
    cout << drawcount << endl << drawmax;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
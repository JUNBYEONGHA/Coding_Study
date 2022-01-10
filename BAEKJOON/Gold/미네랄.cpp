#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
#include<vector>

#define endl "\n"
#define MAX 100
#define INF 987654321
using namespace std;

int R, C, N;
char MAP[MAX][MAX];
bool Visit[MAX][MAX];
bool Cluster[MAX][MAX];
vector<int> Order;
vector<pair<int, int>> Air_Cluster;

int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

int Min(int A, int B) { if (A < B) return A; return B; }

void Input()
{
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> MAP[i][j];
        }
    }

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a; cin >> a;
        Order.push_back(a);
    }
}

bool Throw_Stick(int H, char ch)
{
    if (ch == 'L')
    {
        for (int i = 0; i < C; i++)
        {
            if (MAP[H][i] == 'x')
            {
                MAP[H][i] = '.';
                return true;
            }
        }
    }
    else
    {
        for (int i = C - 1; i >= 0; i--)
        {
            if (MAP[H][i] == 'x')
            {
                MAP[H][i] = '.';
                return true;
            }
        }
    }
    return false;
}

void BFS(int a, int b)
{
    queue<pair<int, int>> Q;
    Q.push(make_pair(a, b));
    Visit[a][b] = true;

    while (Q.empty() == 0)
    {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < R && ny < C)
            {
                if (MAP[nx][ny] == 'x' && Visit[nx][ny] == false)
                {
                    Visit[nx][ny] = true;
                    Q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

bool Cluster_In_Air()
{
    for (int i = 0; i < C; i++)
    {
        if (MAP[R - 1][i] == 'x' && Visit[R - 1][i] == false)
        {
            BFS(R - 1, i);
        }
    }

    bool CIA = false;

    memset(Cluster, false, sizeof(Cluster));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (MAP[i][j] == 'x' && Visit[i][j] == false)
            {
                CIA = true;
                Air_Cluster.push_back(make_pair(i, j));
                Cluster[i][j] = true;
            }
        }
    }
    return CIA;
}

int Gravity(int x, int y)
{
    int Cnt = 0;
    for (int i = x + 1; i < R; i++)
    {
        if (MAP[i][y] == 'x')
        {
            if (Cluster[i][y] == true) return INF;
            else return Cnt;
        }
        else if (MAP[i][y] == '.') Cnt++;
    }
    return Cnt;
}

void Remake_MAP()
{
    int H = INF - 1;
    for (int i = 0; i < Air_Cluster.size(); i++)
    {
        int x = Air_Cluster[i].first;
        int y = Air_Cluster[i].second;

        int Temp_H = Gravity(x, y);
        if (Temp_H == INF) continue;
        else H = Min(H, Temp_H);
    }

    sort(Air_Cluster.begin(), Air_Cluster.end());
    for (int i = Air_Cluster.size() - 1; i >= 0; i--)
    {
        int x = Air_Cluster[i].first;
        int y = Air_Cluster[i].second;

        MAP[x][y] = '.';
        MAP[x + H][y] = 'x';
    }
}

void Solution()
{
    for (int i = 0; i < Order.size(); i++)
    {
        Air_Cluster.clear();
        memset(Visit, false, sizeof(Visit));
        memset(Cluster, false, sizeof(Cluster));

        char Order_C;
        int Height = Order[i];
        Height = R - Height;

        if (i % 2 == 0) Order_C = 'L';
        else Order_C = 'R';

        if (Throw_Stick(Height, Order_C) == false) continue;

        if (Cluster_In_Air() == false) continue;
        else Remake_MAP();
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << MAP[i][j];
        }
        cout << endl;
    }
}
void Answer()
{
	Input();
    Solution();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}

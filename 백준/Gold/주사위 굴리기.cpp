#include<iostream>
#define endl "\n"
using namespace std;

int map[21][21];
int N, M;
int x, y;
// 0 : 悼率 , 1 : 辑率 , 2 : 合率 , 3 : 巢率
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int order[1001];

int dice[6];
int dice_temp[6];

void Dice_Move(int order)
{
	switch (order)
	{
	case 0:
		dice_temp[0] = dice[2];
		dice_temp[1] = dice[1];
		dice_temp[2] = dice[5];
		dice_temp[3] = dice[0];
		dice_temp[4] = dice[4];
		dice_temp[5] = dice[3];
		break;
	case 1:
		dice_temp[0] = dice[3];
		dice_temp[1] = dice[1];
		dice_temp[2] = dice[0];
		dice_temp[3] = dice[5];
		dice_temp[4] = dice[4];
		dice_temp[5] = dice[2];
		break;
	case 2:
		dice_temp[0] = dice[1];
		dice_temp[1] = dice[5];
		dice_temp[2] = dice[2];
		dice_temp[3] = dice[3];
		dice_temp[4] = dice[0];
		dice_temp[5] = dice[4];
		break;
	case 3:
		dice_temp[0] = dice[4];
		dice_temp[1] = dice[0];
		dice_temp[2] = dice[2];
		dice_temp[3] = dice[3];
		dice_temp[4] = dice[5];
		dice_temp[5] = dice[1];
		break;
	}
	for (int i = 0; i < 6; i++)
	{
		dice[i] = dice_temp[i];
	}
}

void Move(int order)
{
	int nx = x + dx[order];
	int ny = y + dy[order];
	if (nx < 0 || ny < 0 || nx >= N || ny >= M)
	{
		return;
	}

	Dice_Move(order);

	if (map[nx][ny] == 0)
	{
		map[nx][ny] = dice[0];
	}
	else
	{
		dice[0] = map[nx][ny];
		map[nx][ny] = 0;
	}

	x = nx;
	y = ny;

	cout << dice[5] << endl;
}

void Answer()
{
	int k;
	cin >> N >> M >> x >> y >> k;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < k; i++)
	{
		cin >> order[i];
	}
	for (int i = 0; i < k; i++)
	{
		Move(order[i] - 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
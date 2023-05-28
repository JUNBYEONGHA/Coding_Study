#include<iostream>
#define endl "\n"
using namespace std;

char gear[1001][8], left_gear[1001];

int num;

void gear_rotation(int index, int dir, int pre)
{

	if (index > 0 && index - 1 != pre && (gear[index - 1][(left_gear[index - 1] + 4) % 8]
		!= gear[index][left_gear[index]]))
		gear_rotation(index - 1, -1 * dir, index);
	if (index < num - 1 && index + 1 != pre && (gear[index + 1][left_gear[index + 1]]
		!= gear[index][(left_gear[index] + 4) % 8]))
		gear_rotation(index + 1, -1 * dir, index);
	left_gear[index] = (dir == 1 ? (left_gear[index] + 7) % 8 : (left_gear[index] + 1) % 8);
}
void Answer()
{
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		left_gear[i] = 6;
		for (int j = 0; j < 8; j++)
		{
			cin >> gear[i][j];
		}
	}
	int T, answer = 0, a, b;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		gear_rotation(a - 1, b, a - 1);
	}
	for (int i = 0; i < num; i++)
	{
		if (gear[i][(left_gear[i] + 2) % 8] == '1') answer++;
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
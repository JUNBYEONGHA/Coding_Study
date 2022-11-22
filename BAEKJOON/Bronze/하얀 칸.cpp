#include <iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	char a, b;
	int answer = 0;
	for (int i = 0; i < 32; i++)
	{
		cin >> a >> b;
		if ((i / 4) % 2 == 0)
		{
			if (a == 'F')
			{
				answer++;
			}
		}
		else
		{
			if (b == 'F')
			{
				answer++;
			}
		}
	}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
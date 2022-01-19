#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int A;

void Input()
{
	cin >> A;
}
void Solution()
{
	if (A != 1)
	{
		int index = 2;
		while (true)
		{
			if (A % index == 0)
			{
				A /= index;
				cout << index << endl;
			}
			else
			{
				index++;
			}
			if (A <= 1) break;
		}
	}
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
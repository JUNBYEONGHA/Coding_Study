#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int X1,Y1,R1,X2,Y2,R2,num;

void Input()
{
	cin >> num;
}
void Solution()
{
	while (num--)
	{
		cin >> X1 >> Y1 >> R1;
		cin >> X2 >> Y2 >> R2;
		int d = (X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2);
		int cond1 = (R1 - R2) * (R1 - R2);
		int cond2 = (R1 + R2) * (R1 + R2);
		if (d == 0)
		{
			if (cond1 == 0)
				cout << "-1" << endl;
			else
				cout << "0" << endl;
		}
		else if (d == cond1 || d == cond2)
			cout << "1" << endl;
		else if (cond1 < d && d < cond2)
			cout << "2" << endl;
		else
			cout << "0" << endl;
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
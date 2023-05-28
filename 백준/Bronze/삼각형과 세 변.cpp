#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	int A, B, C;
	while (true)
	{
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0) break;
		
		if (A == B && B == C)
		{
			cout << "Equilateral" << endl;
		}
		else if (A >= B + C || B >= C + A || C >= A + B)
		{
			cout << "Invalid" << endl;
		}
		else if (A == B || B == C || A == C)
		{
			cout << "Isosceles" << endl;
		}
		else
		{
			cout << "Scalene" << endl;
		}
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
    int A, B, C;

    cin >> A >> B >> C;

    if ((A + B + C) != 180)
        cout << "Error\n";
    else if (A == B && B == C)
        cout << "Equilateral\n";
    else if (A == B || A == C || B == C)
        cout << "Isosceles\n";
    else
        cout << "Scalene\n";

    return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
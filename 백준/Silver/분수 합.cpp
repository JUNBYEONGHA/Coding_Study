#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

int gcd(int A, int B)
{
	if (B == 0) return A;
	return gcd(B, A % B);
}

void Answer()
{
	int A1, B1, A2, B2;
	cin >> A1 >> B1 >> A2 >> B2;
	int A3 = (A1 * B2) + (A2 * B1);
	int B3 = B1 * B2;
	int div = gcd(A3, B3);
	cout << A3 / div << " " << B3 / div;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
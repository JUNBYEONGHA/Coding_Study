#include<iostream>
#include<vector>

#define endl "\n"
using namespace std;

typedef vector < vector <long long>> matrix;
const long long mod = 1000000007;

matrix operator * (matrix& a, matrix& b)
{
	matrix c(2, vector<long long>(2));
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
				c[i][j] += a[i][k] * b[k][j];
			c[i][j] %= mod;
		}
	return c;
}

void Answer()
{
	long long num;
	cin >> num;

	matrix ans = { {1,0} ,{0,1} };
	matrix a = { {1,1} ,{1,0} };

	while (num > 0)
	{
		if (num % 2 == 1)
			ans = ans * a;
		a = a * a;
		num /= 2;
	}

	cout << ans[0][1];
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
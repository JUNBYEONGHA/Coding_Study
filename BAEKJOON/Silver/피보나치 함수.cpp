#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

long long fiboarr[50] = { 0,1, };
int T;

long long fibo(int N)
{
	if (N == 0 || N == 1)
		return fiboarr[N];
	else if (fiboarr[N] == 0)
		fiboarr[N] = fibo(N - 1) + fibo(N - 2);
	return fiboarr[N];
}
void Input()
{
	cin >> T;
}
void Solution()
{
	int tmp;
	for (int i = 0; i < T; i++)
	{
		cin >> tmp;
		if (tmp == 0)
			cout << "1 0" << '\n';
		else
			cout << fibo(tmp - 1) << ' ' << fibo(tmp) << '\n';
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
#include<iostream>

#define endl "\n"
using namespace std;

long long N,A;

long long five(long long n)
{
	long long ans = 0;
	for (long long i = 5; i <= n; i *= 5) {
		ans += n / i;
	}
	return ans;
}
long long two(long long n)
{
	long long ans = 0;
	for (long long i = 2; i <= n; i *= 2) {
		ans += n / i;
	}
	return ans;
}
void Input()
{
	cin >> N >> A;
}
void Solution()
{
	long long count5 = five(N) - five(N - A) - five(A);
	long long count2 = two(N) - two(N - A) - two(A);
	cout << min(count5,count2);
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
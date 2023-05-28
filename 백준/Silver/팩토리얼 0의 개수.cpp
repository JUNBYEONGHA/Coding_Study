#include<iostream>

#define endl "\n"
using namespace std;

int N;

void Input()
{
	cin >> N;
}
void Solution()
{
	int ans = 0;
	for (int i = 5; i <= N; i *= 5) {
		ans += N / i;
	}
	cout << ans;
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
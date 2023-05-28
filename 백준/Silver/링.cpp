#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
vector<int> V;

int gcd(int a, int b)
{
	return a % b ? gcd(b, a % b) : b;
}

void Input()
{
	cin >> N;
	int A;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		V.push_back(A);
	}
}
void Solution()
{
	for (int i = 1; i < N; i++)
	{
		int g = gcd(V[0], V[i]);
		cout << V[0] / g << "/" << V[i] / g << endl;
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
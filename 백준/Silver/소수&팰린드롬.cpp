#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

#define endl "\n"
using namespace std;

// 소수 판별 함수
bool isPrime(int N)
{
	if (N < 2) return false;
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0) return false;
	}
	return true;
}
// 팰린드롬 판별 함수
bool isPalindrome(string S)
{
	for (int i = 0 , j = S.size() - 1 ; i < S.size() ; i++ , j--)
	{
		if (S[i] != S[j]) return false;
	}
	return true;
}

void Answer()
{
	int N;
	cin >> N;
	while (true)
	{
		// 소수 이면서 팰린드롬이면 출력
		if (isPrime(N) && isPalindrome(to_string(N)))
		{
			cout << N;
			break;
		}
		N++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
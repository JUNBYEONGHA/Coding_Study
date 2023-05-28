#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

int arr[1001];

void Answer()
{
	int N, M, A, B;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		arr[A]++;
		arr[B]++;
	}
	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
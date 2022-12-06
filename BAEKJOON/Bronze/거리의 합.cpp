#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

long long arr[10001];

void Answer()
{

	int n;
	cin >> n;
	long long ans = 0;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) ans += arr[i] * (2 * i - n + 1);
	cout << ans * 2;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}
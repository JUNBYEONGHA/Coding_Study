#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

#define M 1234567891

void Answer()
{
	int len, i;
	long long hash_value = 0, R = 1;
	char str[51];

	cin >> len >> str;

	for (i = 0; i < len; i++)
	{
		hash_value = (hash_value + (str[i] - 'a' + 1) * R) % M;
		R = (R * 31) % M;
	}
	cout << hash_value;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
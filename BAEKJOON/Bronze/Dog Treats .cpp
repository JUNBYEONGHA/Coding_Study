#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int s, m, l;
	cin >> s >> m >> l;
	if (s * 1 + m * 2 + l * 3 >= 10)
		cout << "happy";
	else
		cout << "sad";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
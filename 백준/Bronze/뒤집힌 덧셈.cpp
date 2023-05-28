#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

int Rev(string str)
{
	reverse(str.begin(), str.end());
	int result = stoi(str);
	return result;
}

void Answer()
{
	string a, b;
	cin >> a >> b;
	int res = Rev(a) + Rev(b);
	cout << Rev(to_string(res)) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int cnt = 1;
	int N;
	cin >> N;
	vector<int> s;
	vector<char> result;
	while (N--)
	{
		int n;
		cin >> n;
		while (cnt <= n)
		{
			s.push_back(cnt);
			cnt += 1;
			result.push_back('+');
		}
		if (s.back() == n)
		{
			s.pop_back();
			result.push_back('-');
		}
		else
		{
			cout << "NO";
			return;
		}
	}

	for (auto c : result)
	{
		cout << c << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

#define endl "\n"
using namespace std;

int N;
char c[10];
bool check[10];
vector<string> ans;

bool ok(string num)
{
	for (int i = 0; i < N; i++)
	{
		if (c[i] == '>')
		{
			if (num[i] < num[i + 1]) return false;
		}
		else if (c[i] == '<')
		{
			if (num[i] > num[i + 1]) return false;
		}
	}
	return true;
}
void go(int index, string num)
{
	if (index == N + 1)
	{
		if (ok(num))
			ans.push_back(num);
		return;
	}
	for (int i = 0; i <= 9 ; i++)
	{
		if (check[i]) continue;
		check[i] = true;
		go(index + 1, num + to_string(i));
		check[i] = false;
	}
}

void Answer()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> c[i];
	}
	go(0, "");
	auto p = minmax_element(ans.begin(), ans.end());
	cout << *p.second << endl;
	cout << *p.first;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define endl "\n"
using namespace std;

void Answer()
{
	int num , A;
	cin >> num;
	vector<int> v(num);
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		v[i] = A;
	}
	sort(v.begin(), v.end());
	cin >> num;

	vector<int> answer(num);
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		auto upper = upper_bound(v.begin(), v.end(), A);
		auto lower = lower_bound(v.begin(), v.end(), A);
		answer[i] = upper - lower;
	}
	for (int n : answer)
		cout << n << " ";
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
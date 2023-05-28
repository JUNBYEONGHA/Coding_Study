#include<iostream>
#include<vector>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int num , A;
	cin >> num;
	vector<int> input(num), answer(num ,- 1) , s;
	for (int i = 0, t = 0; i < num; i++) cin >> input[i];
	
	for (int i = 0; i < num; i++)
	{
		while (!s.empty() && input[s.back()] < input[i])
		{
			answer[s.back()] = input[i];
			s.pop_back();
		}
		s.push_back(i);
	}
	for (int i = 0; i < num; i++) cout << answer[i] << " ";
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
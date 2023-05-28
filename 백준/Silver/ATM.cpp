#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;
vector<int> person;

void Input()
{
	cin >> num;
	int A;
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		person.push_back(A);
	}
}
void Solution()
{
	sort(person.begin(), person.end());

	int result = 0 , temp = 0;
	for (int i = 0; i < num; i++)
	{
		temp = temp + person[i];
		result += temp;
	}
	cout << result;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include<iostream>
#include<vector>
#include<map>

#define endl "\n"
using namespace std;

void Answer()
{
	int num;
	string temp;
	cin >> num;
	map<string, int> answer;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		answer.insert({ temp,1 });
	}
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		answer.insert({ temp,0 });
		answer[temp]++;
		if (answer[temp] > 1)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
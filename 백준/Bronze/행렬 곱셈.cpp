#include<iostream>
#include<deque>
#include<vector>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int a, b, c;
	cin >> a >> b;
	vector<vector<int>> arr1;
	for (int i = 0; i < a; i++)
	{
		vector<int> v;
		for (int j = 0; j < b; j++)
		{
			cin >> c;
			v.push_back(c);
		}
		arr1.push_back(v);
	}
	cin >> a >> b;
	vector<vector<int>> arr2;
	for (int i = 0; i < a; i++)
	{
		vector<int> v;
		for (int j = 0; j < b; j++)
		{
			cin >> c;
			v.push_back(c);
		}
		arr2.push_back(v);
	}
	vector<vector<int>> answer;
	for (int i = 0; i < arr1.size(); i++) {
		vector<int> v;
		for (int j = 0; j < arr2[0].size(); j++) {
			int sum = 0;
			for (int k = 0; k < arr1[0].size(); k++) {
				sum += arr1[i][k] * arr2[k][j];
			}
			v.push_back(sum);
		}
		answer.push_back(v);
	}
	for (int i = 0; i < answer.size(); i++)
	{
		for (int j = 0; j < answer[i].size(); j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
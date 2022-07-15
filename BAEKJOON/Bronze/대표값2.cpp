#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	vector<int> arr;
	int a , result = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		result += a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cout << result / 5 << endl << arr[2] << endl;
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
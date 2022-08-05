#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{

	int n;
	cin >> n;
	vector<string>v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower);
	}

	for (int i = 0; i < n; i++)	
	{
		cout << v[i] << endl;
	}

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

bool Compare(string a, string b)
{
	if (a.size() != b.size()) return a.size() < b.size();

	int asum = 0, bsum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= '0' && a[i] <= '9') asum += (a[i] - '0');
		if (b[i] >= '0' && b[i] <= '9') bsum += (b[i] - '0');
	}
	if (asum != bsum) return asum < bsum;

	return a < b;
}

void Answer()
{
	int n;
	cin >> n;
	vector<string> result;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		result.push_back(temp);
	}
	sort(result.begin(), result.end(), Compare);
	for (int i = 0; i < n; i++)
	{
		cout << result[i] << endl;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
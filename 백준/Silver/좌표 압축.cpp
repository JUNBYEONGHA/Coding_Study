#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
vector<int> idx;
vector<int> points;
void Input()
{
	int n;
	cin >> n;
	idx = vector<int>(n);
	points = vector<int>(n);
	for (int i = 0; i < n; ++i) {
		cin >> idx[i];
		points[i] = idx[i];
	}
}
void Solution()
{
	sort(idx.begin(), idx.end());
	idx.erase(unique(idx.begin(), idx.end()), idx.end());

	for (auto& c : points) {
		cout << lower_bound(idx.begin(), idx.end(), c) - idx.begin() << ' ';
	}

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
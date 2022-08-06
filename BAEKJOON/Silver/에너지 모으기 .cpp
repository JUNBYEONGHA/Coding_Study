#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int m = 0;

void energy(vector<int>& v, int ans) {
	if (v.size() == 3) {
		ans += v[0] * v[2];
		m = max(m, ans);
		return;
	}

	for (int i = 0; i < v.size() - 2; i++) {
		vector<int> v_copy = v;
		v_copy.erase(v_copy.begin() + i + 1); 
		energy(v_copy, ans + (v[i] * v[i + 2])); 
	}

}


void Answer()
{	
	int N;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	energy(v, 0);

	cout << m << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
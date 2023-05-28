#include<iostream>
#include<deque>
#define endl "\n"
using namespace std;

int n, k, x;
deque <bool> check;
deque <int> dq;
int ans = 0;

int find() {
	int ret = 0;
	for (int i = 0; i < dq.size(); i++) {
		if (dq[i] == 0) ret++;
	}
	return ret;
}

void simul() {
	while (1) {
		if (find() >= k) break;
		ans++;

		dq.push_front(dq.back());
		dq.pop_back();

		check.push_front(check.back());
		check.pop_back();
		if (check[n - 1] == true) check[n - 1] = false;

		for (int i = n - 2; i >= 0; i--) {

			if (check[i] == true && dq[i + 1] >= 1 && check[i + 1] == false)
			{
				dq[i + 1]--;
				check[i] = false;
				if (i == n - 2) continue;
				check[i + 1] = true;
			}
		}
		if (dq[0] >= 1 && check[0] == false) {
			check[0] = true;
			dq[0]--;
		}
	}
}


void Answer()
{	
	cin >> n >> k;
	for (int i = 0; i < 2 * n; i++) {
		cin >> x;
		dq.push_back(x);
		check.push_back(false);
	}
	simul();
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
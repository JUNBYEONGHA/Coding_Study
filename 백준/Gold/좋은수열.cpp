#include <iostream>
#include <string>
#include <sstream>
#define endl "\n"
using namespace std;

int endFlag = 0;
int N;

bool isValid(string result) {
	int len = result.size();
	int end = len - 1;

	for (int i = 1; i <= len / 2; i++) {
		string a = result.substr(end - i, i);
		string b = result.substr(end, i);
		if (!a.compare(b)) return false;
		--end;
	}
	return true;
}

void dfs(int step, string result) {
	if (endFlag == 1) return; 
	if (!isValid(result)) return; 
	if (step == N) {
		cout << result << endl; 
		endFlag = 1;
		return;
	}
	dfs(step + 1, result + '1');
	dfs(step + 1, result + '2');
	dfs(step + 1, result + '3');
}

void Answer()
{
	cin >> N;
	dfs(0, "");
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
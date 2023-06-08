#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	double totalscoreavr = 0;
	int cnt = 0;
	double gradenum = 0;
	for (int i = 0; i < 20; i++)
	{
		string subject , grade;
		double score;
		cin >> subject >> score >> grade;
		if (grade[0] == 'P') continue;
		cnt += (int)score;
		if (grade[0] == 'F') continue;

		if (grade[0] == 'A') gradenum = 4;
		else if (grade[0] == 'B') gradenum = 3;
		else if (grade[0] == 'C') gradenum = 2;
		else gradenum = 1;

		if (grade[1] == '+') gradenum += 0.5;

		totalscoreavr += gradenum * score;
	}
	cout << totalscoreavr / cnt;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
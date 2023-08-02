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
    string s;
    cin >> s;
    int count = 0;
    while (s.size() > 1) { // 문자열 자릿수가 1보다 클 때
        int sum = 0; // 합
        for (int i = 0; i < s.size(); i++) { // 문자열 자릿수만큼 반복
            sum += s[i] - '0'; // 문자 숫자로 변환해 sum에 저장
        }
        s = to_string(sum); // 숫자 문자로 변환해 s에 저장
        count++;
    }

    cout << count << "\n"; // 변환할 때 걸린 횟수 출력
    if (stoi(s) % 3 == 0) // s가 3의 배수일 때
        cout << "YES";
    else
        cout << "NO";

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
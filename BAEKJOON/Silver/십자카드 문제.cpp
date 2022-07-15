#include<iostream>
#include<algorithm>
#include<deque>
#include<string>
#define endl "\n"
using namespace std;

int ans, maxi;

int getClockNum(string s) {
    deque <char> dq;
    int smallInt = 0x3f3f3f3f;
    for (int i = 0; i < s.size(); i++) {
        dq.push_back(s[i]);
    }

    for (int i = 0; i < s.size(); i++) {
        string tmp = "";
        for (int j = 0; j < s.size(); j++)
            tmp += dq.at(j);
        smallInt = min(smallInt, stoi(tmp));
        dq.push_back(dq.front());
        dq.pop_front();
    }
    return smallInt;
}

void Answer()
{
    string num = "";
    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        num += s;
    }
    for (int card = 1111; card <= 9999; card++) {
        string s = to_string(card);
        int clockNum = getClockNum(s);
        if (maxi < clockNum) {
            maxi = clockNum;
            ans++;
        }
        if (clockNum == getClockNum(num)) {
            cout << ans;
            break;
        }
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
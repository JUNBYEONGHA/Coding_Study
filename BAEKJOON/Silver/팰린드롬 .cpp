#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

int t, k;
string ans;
vector <string> words;

bool isPalindrome(string mergedWord) {
    int sz = mergedWord.size();
    for (int i = 0; i < sz / 2; i++)
        if (mergedWord[i] != mergedWord[sz - i - 1])
            return false;
    return true;
}

void Answer()
{
    cin >> t;
    while (t--) {
        cin >> k;
        ans = "0";
        words.resize(k);
        for (int i = 0; i < k; i++) cin >> words[i];

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {
                string mergedWord = words[i] + words[j];
                string mergedWord2 = words[j] + words[i];
                if (isPalindrome(mergedWord)) ans = mergedWord;
                if (isPalindrome(mergedWord2)) ans = mergedWord2;
            }
        }
        cout << ans << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
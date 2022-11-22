#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int test;
    cin >> test;
    cin.ignore();

    for (int i = 0; i < test; i++) {
        string str;
        getline(cin, str);

        vector<string> vec;

        stringstream ss; // 공백 기준으로 문자열을 짜른다.
        ss.str(str);

        string word;
        while (ss >> word) {
            vec.push_back(word);
        }

        for (int i = 2; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << vec[0] << " " << vec[1] << endl;
    }
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}

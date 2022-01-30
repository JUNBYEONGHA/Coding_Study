#include<iostream>
#include<vector>
#include<string>
#include<stack>

#define endl "\n"
using namespace std;

void Input()
{

}
void Solution()
{
	while (true) {
		stack<int> st;
		string s; bool flag = false;
		getline(cin, s); 
		if (s.size() == 1 && s[0] == '.')
			break;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '[') st.push(1);
			if (s[i] == '(') st.push(2);
			if (s[i] == ']' || s[i] == ')')
			{
				if (st.empty()) { flag = true; }
				else if (s[i] == ']') { if (st.top() == 1) st.pop(); else flag = true; }
				else if (s[i] == ')') { if (st.top() == 2) st.pop(); else flag = true; }
			}
		} if (!flag && st.empty()) cout << "yes\n";
		else cout << "no\n";
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
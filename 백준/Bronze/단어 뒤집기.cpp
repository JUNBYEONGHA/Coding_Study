#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>
#define endl "\n"
using namespace std;


void Answer()
{
    int T;        
    string sentence;    
    stack <char> st;  

    cin >> T;
    cin.ignore();  
    while (T--)
    {
        getline(cin, sentence);
        sentence += ' ';

        for (int i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] == ' ')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }cout << ' ';
            }
            else
                st.push(sentence[i]);
        }cout << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
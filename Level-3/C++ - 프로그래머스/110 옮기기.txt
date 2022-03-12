#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> s) {
    vector<string> answer;
    for(auto one : s)
    {
        int addCount = 0;
        string temp = "";
        for(int i = 0; i < one.size(); i++)
        {
            temp += one[i];
            if(temp.size() >= 3 && temp.substr(temp.size() - 3) == "110" )
            {
                addCount++;
                temp.erase(temp.size() - 3,3);
            } 
        }
        int i;
        for(i = temp.size() - 1; i >= 0 ; i--)
        {
            if (temp[i] == '0')
            {
                break;
            }
        }
        for(int j = 0 ; j < addCount; j++)
        {
            temp.insert(i+1,"110");
        }
        answer.push_back(temp);
    }
    return answer;
}
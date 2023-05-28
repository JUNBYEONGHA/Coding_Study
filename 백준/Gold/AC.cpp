#include<iostream>
#include<deque>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, temp = 0 , n;
	string A , B;
	deque<int> answer;
	cin >> N;
	while (N--)
	{
		cin >> A >> n >> B ;
		for (char b : B)
		{
			if (b >= '0' && b <= '9')
			{
				temp += b - '0';
				temp *= 10;
			}
			else
			{
				temp /= 10;
				if (temp != 0)
					answer.push_back(temp);
				temp = 0;
			}
		}
		bool check = true ,error = false;
		for (char a : A)
		{
			if (a == 'R') 
				check = check ? false : true;
			else if (a == 'D')
			{
				if (answer.empty())
				{
					error = true;
					break;
				}
				if (check)
				{
					answer.pop_front();
				}
				else
				{
					answer.pop_back();
				}
			}
		}
		if (error) cout << "error" << endl;
		else if (!answer.empty())
		{
			cout << "[";
			for (int i = 0; i < answer.size() - 1; i++)
			{
				if (check)
				{
					cout << answer[i] << ",";
				}
				else
				{
					cout << answer[answer.size() - 1 - i] << ",";
				}
			}
			if (check)
			{
				cout << answer[answer.size()-1] << "]" << endl;
			}
			else
			{
				cout << answer[0] << "]" << endl;
			}
		}
		else
		{
			cout << "[]" << endl;
		}
		answer.clear();
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
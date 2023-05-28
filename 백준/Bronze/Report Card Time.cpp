#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		int score;
		cin >> s >> score;
		cout << s << " ";
		if (score >= 97 && score <= 100)
		{
			cout << "A+" << endl;
		}
		else if (score >= 90 && score <= 96)
		{
			cout << "A" << endl;
		}
		else if (score >= 87 && score <= 89)
		{
			cout << "B+" << endl;
		}
		else if (score >= 80 && score <= 86)
		{
			cout << "B" << endl;
		}
		else if (score >= 77 && score <= 79)
		{
			cout << "C+" << endl;
		}
		else if (score >= 70 && score <= 76)
		{
			cout << "C" << endl;
		}
		else if (score >= 67 && score <= 69)
		{
			cout << "D+" << endl;
		}
		else if (score >= 60 && score <= 66)
		{
			cout << "D" << endl;
		}
		else
		{
			cout << "F" << endl;
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
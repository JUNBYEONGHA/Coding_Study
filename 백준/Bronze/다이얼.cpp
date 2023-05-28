#include<iostream>
#include<queue>
#include<string>
#include<vector>

#define endl "\n"
using namespace std;

string A;

void Input()
{
	cin >> A;
}
void Solution()
{
	int total = 0;
	for (int i = 0; i < A.size(); i++)
	{
		switch (A[i])
		{
		case 'A': case 'B': case 'C':
			total += 2;
			break;
		case 'D': case 'E': case 'F':
			total += 3;
			break;
		case 'G': case 'H': case 'I':
			total += 4;
			break;
		case 'J': case 'K': case 'L':
			total += 5;
			break;
		case 'M': case 'N': case 'O':
			total += 6;
			break;
		case 'P': case 'Q': case 'R':case 'S':
			total += 7;
			break;
		case 'T': case 'U': case 'V':
			total += 8;
			break;
		case 'W': case 'X': case 'Y':case 'Z':
			total += 9;
			break;
		default:
			break;
		}
		total++;
	}
	cout << total;
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
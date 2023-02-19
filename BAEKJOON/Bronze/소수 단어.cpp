#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

#define endl "\n"
using namespace std;

bool isprime(int num)
{
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

void Answer()
{
	string s;
	cin >> s;
	int wordle = 0;
	for (int i = 0; i < s.size() ; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			wordle += s[i] - 'a' + 1;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			wordle += s[i] - 'A' + 27;
		}
	}
	if (isprime(wordle))
	{
		cout << "It is a prime word." << endl;
	}
	else
	{
		cout << "It is not a prime word." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
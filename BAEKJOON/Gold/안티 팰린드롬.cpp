#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

int alpha[26];
int length;


int check(const string palindrome)
{
	for (int i = 0; i < length / 2; i++)
	{
		if (palindrome[i] == palindrome[length - i - 1])
		{
			return length - i - 1;
		}
	}
	return -1;
}
void anti(string palindrome)
{
	while (true)
	{
		int index = check(palindrome);
		if (index == -1) break;
		for (int i = index + 1; i < length; i++)
		{
			if (palindrome[index] != palindrome[i])
			{
				char temp = palindrome[index];
				palindrome[index] = palindrome[i];
				palindrome[i] = temp;
				break;
			}
		}
	}
	cout << palindrome;
}


void Answer()
{
	string s;
	cin >> s;
	length = s.size();
	for (int i = 0; i < length; i++)
	{
		alpha[s[i] - 'a']++;
	}
	string result = "";
	int temp = length / 2 + length % 2;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] > temp)
		{
			cout << -1;
			return;
		}
		while (alpha[i]--)
		{
			result += (i + 'a');
		}
	}
	anti(result);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
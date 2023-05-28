#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	int len, height, width;

	cin >> len >> height >> width;

	cout << (int)(len / sqrt(height * height + width * width) * height) << " "
		<< (int)(len / sqrt(height * height + width * width) * width) << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
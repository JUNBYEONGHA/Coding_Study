#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

int t, n, totalVote, maxVote;
vector <int> candidates, majorCandidate;

void Answer()
{
    cin >> t;
    while (t--) {

        cin >> n;
        totalVote = 0, maxVote = 0;
        candidates.resize(n);
        majorCandidate.clear();

        for (int i = 0; i < n; i++) {
            cin >> candidates[i];
            totalVote += candidates[i];
            maxVote = max(maxVote, candidates[i]);
        }

        for (int i = 0; i < n; i++)
            if (candidates[i] == maxVote)
                majorCandidate.push_back(i + 1);

        if (majorCandidate.size() > 1) cout << "no winner\n";
        else if (totalVote / 2 < maxVote) cout << "majority winner " << majorCandidate[0] << '\n';
        else cout << "minority winner " << majorCandidate[0] << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}
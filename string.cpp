#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	cin >> s;
	int k = 0;
	vector<string> perms;
	
	sort(s.begin(), s.end());
	do {
		perms.push_back(s);
		k += 1;
	} while (next_permutation(s.begin(), s.end()));
	
	cout << k << "\n";
	
	for (string word : perms) {
		cout << word << "\n";
	}
}

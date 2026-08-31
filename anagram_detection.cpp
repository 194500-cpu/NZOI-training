#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string first; string second;
	cin >> first >> second;
	if (first.length() != second.length()) {
		cout << "no";
		return 0;
	}
	sort(second.begin(), second.end());
	sort(first.begin(), first.end());
	if (first == second) {
		cout << "yes";
		return 0;
	}
	cout << "no";
	return 0;
}

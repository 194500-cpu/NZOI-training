#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
	string input;
	int n;
	cin >> n;
	input.resize(n);
	for (char &letter : input) {
		cin >> letter;
	}
	set<char> filtered(input.begin(), input.end());
	cout << input.size() - filtered.size() + 1;
}
//~ WA

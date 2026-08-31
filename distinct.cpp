#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	
	vector<int> input(n);
	for (int &item : input) {
		cin >> item;
	}
	
	set<int> filtered(input.begin(), input.end());
	cout << filtered.size();
	
}
//~ AC

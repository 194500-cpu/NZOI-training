#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	int n;
	cin >> n;
	map<long long, long long> look;
	
	for (long long i = 0; i < n; ++i) {
		int operation;
		cin >> operation;
		if (operation == 1) {
			long long pos;
			cin >> pos;
			cout << look[pos] << "\n";
		} else {
			long long pos; long long val;
			cin >> pos >> val;
			look[pos] = val;
		}
	}
}

//~ AC

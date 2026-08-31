#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
using ll = long long;


int main() {
	ll n; ll m;
	cin >> n >> m;
	vector<ll> rows(n);
	vector<ll> columns(m);
	unordered_map<int, int> counterrow;
	for (ll &v : rows) {
		cin >> v;
	}
	for (ll &v2 : columns) {
		cin >> v2;
	}
	
	
	ll maximum = 0; ll minimum = 0;
	//find maximum
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			//as it cannot go higher than row or column max, we take the smallest max to fit in contraint
			maximum += min(rows[i], columns[j]);
		}
	}
	
	//find minimum
	for (int row = 0; row < n; ++row) {
		for (int column = 0; column < m; ++column) {
			if (columns[column] == rows[row]) {
				
			}
		}
	}
	
	
}

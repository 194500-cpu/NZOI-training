#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;


int main() {
	ll n; ll m;
	cin >> n >> m;
	vector<ll> rows(n);
	vector<ll> columns(m);
	for (ll &v : rows) {
		cin >> v;
	}
	for (ll &v2 : columns) {
		cin >> v2;
	}
	
	ll maximum = 0; ll minimum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			maximum += min(rows[i], columns[j]);
		}
	}
	
}

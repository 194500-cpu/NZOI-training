#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ll n; ll m;
	cin >> n >> m;
	vector<ll> rows(n);
	vector<ll> columns(m);
	unordered_map<ll, ll> counterrow;
	unordered_map<ll, ll> countercolumns;
	for (ll &v : rows) {
		cin >> v;
	}
	for (ll &v2 : columns) {
		cin >> v2;
	}
	
		
	sort(columns.begin(), columns.end());
	ll maximum = 0; ll minimum = 0;
	vector<ll> prefix(m+1, 0);
	for (ll i = 1; i <= m; ++i){
		prefix[i] = prefix[i-1] + columns[i-1];
	}
	
	for (ll row : rows) {
		ll split = lower_bound(columns.begin(), columns.end(), row) - columns.begin();
		maximum += prefix[split];
		maximum += distance(columns.begin() + split, columns.end()) * row;
	}
	
	minimum += n*m;
	
	for (ll i : rows) {
		counterrow[i]++;
		minimum += i - 1;
	}
	for (ll i : columns) {
		countercolumns[i]++;
		minimum += i - 1;
	}
	
	for (int i = 1; i <= columns.back(); ++i) {
		minimum -= (i-1) * min(countercolumns[i], counterrow[i]);
	}
	
	cout << minimum << " " << maximum;
}


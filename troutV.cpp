#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n; 
	cin >> n;
	ll total = 0;
	for (ll i = 0; i < n; ++i) {
		ll dollar; ll cent;
		cin >> dollar >> cent;
		total += dollar * 100 + cent; 	
	}
	
	ll dollars = total / 100;
	ll cents = total % 100;
	string dollarstr = to_string(dollars);
	string centstr = to_string(cents);
	for (ll i = dollarstr.size() -3; i > 0; i -=3) {
		dollarstr.insert(i, ",");
	}
	if (centstr.size() < 2) {
		centstr.insert(0, "0");
	}	
	
	cout << '$' << dollarstr << '.' << centstr;


}

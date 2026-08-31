#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;


int main() {
	ll n; cin >> n;
	string number = to_string(n);
	reverse(number.begin(), number.end());
	vector<ll> digits(number.size() + 1, 0);
	for (ll i = 0; i < number.size(); ++i) {
		digits[i] = number[i] - '0';
	}
	ll seen = 0;
	for (ll i = 0; i < number.size(); ++i) {
		if (digits[i] >= 3) {
			seen += pow(10, i) * (digits[i+1]+1);
		} else {
			seen += pow(10, i) * (digits[i+1]);
		}
		
	}
	cout << seen;
}	

#include <bits/stdc++.h>
using namespace std;
using db = long double;
using it = long long;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	db n;
	cin >> n;
	db total = 0;
	for (it i = 0; i < n; ++i) {
		db dollar; db cent;
		cin >> dollar >> cent;
		total += dollar;
		total += cent / 100;
	}
	
	
	string newstr = to_string(total * 100);
	string dollar = "";
	string decimal = "";
	it upto = 0;
	char cur = 'a';
	while (cur != '.') {
		cur = newstr[upto];
		upto++;
	}
	for (int i = 0; i < upto-1; ++i) {
		dollar.push_back(newstr[i]);
		}
	for (int j = upto-1; j <= upto + 1; ++ j) {
		decimal.push_back(newstr[j]);
		}
	string dollarstr = "";
	int count = 0;
	int curr = dollar.length() -1;
	
	for (int i = 0; i < dollar.length(); ++i) {
		count++;
		if (count == 3 && curr != 0) {
			dollarstr.push_back(newstr[curr]);
			dollarstr.push_back(',');
			count = 0;
		}else {
			dollarstr.push_back(newstr[curr]);
		}
		curr -= 1;
	}
	reverse(dollarstr.begin(), dollarstr.end());
	cout << '$' << dollarstr << decimal;
}

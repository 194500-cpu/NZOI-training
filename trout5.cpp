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

	it remaining = total;
	string newstr = to_string(remaining);
	string finally = "";
	it offset = newstr.size() % 3;
	it count = 1;
	it current = offset - 1;
	if (current < 0) {
		current = 0;
		}
	
	
	if (newstr.length() > 3) {
		for (it x = 0; x < current; ++x) {
			finally.push_back(newstr[x]);
			}
		for (it i = 0; i < newstr.size(); ++i) {
			count++;
			char temp = newstr[current];
			if (count % 3 == 0 && count < newstr.length()) {
				finally.push_back(',');
				finally.push_back(temp);
			} else {
				finally.push_back(temp);
			}
			current++;
		}
	
	string whole = to_string(total);
	it upto = 0;
	char curr = 'a';
	while (curr != '.') {
		curr = whole[upto];
		upto++;
	}
	cout << '$'<< finally << '.' << whole[upto] << whole[upto+1];
	} else {
		string whole = to_string(total);
	it upto = 0;
	char curr = 'a';
	while (curr != '.') {
		curr = whole[upto];
		upto++;
	}
	cout << '$' << newstr << '.' <<whole[upto] << whole[upto+1];
	}
	
	
	
	


}


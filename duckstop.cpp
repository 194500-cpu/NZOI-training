#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int d; int c; int a;
	cin >> d >> c >> a;
	int og = c;
	vector<int> days(d);
	for (int &v : days) {cin >> v;}
	vector<int> least(d);
	int leastseen = 0;
	for (int i = d-1; i > -1; --i) {
		leastseen = max(leastseen, days[i]);
		least[i] = leastseen;
	}
	int holdings = 0;
	int boughtat = INT_MAX;
	for (int j = 0; j < d; ++j) {
		int valtoday = days[j];
		if (valtoday <= a && valtoday <= c && valtoday < least[j] && holdings == 0) {
			int amount = c / valtoday;
			holdings += amount;
			boughtat = valtoday;
			c -= valtoday *amount;
			cout << "BUY " << amount << "\n";
		} else if (valtoday <= boughtat && holdings == 0) {
			cout << "WAIT" << "\n";
		} else if (valtoday <= boughtat && holdings > 0) {
			cout << "HOLD" << "\n";
		} else {
			c += holdings * valtoday;
			cout << "SELL " << holdings << "\n";
			boughtat = INT_MAX;
			holdings = 0;
		}
	}
	cout << c - og;	


}

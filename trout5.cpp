#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long totalcents = 0;
	for (int i = 0; i<n; ++i) {
		long long dollar; long long cents;
		cin >> dollar >> cents;
		totalcents += dollar * 100 + cents;
	}
	
	long long dollars = totalcents / 100;
	long long cents = totalcents % 100;
	string dollarstr = to_string(dollars);
	string centstr = to_string(cents);
	for (long long i = dollarstr.size() - 3; i > 0; i -= 3) {
		dollarstr.insert(i, ",");
		
	}
	if (centstr.size() < 2) {
		centstr.insert(0, "0");
	}
	
	cout << "$" << dollarstr << "." << centstr;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<char> day1(n);
	vector<char> day2(n);
	int count = 0; 
	for (char &item : day1) {
		cin >> item;
	}
	for (char &item : day2) {
		cin >> item;
	}
	for (int i = 0; i < n; ++i) {
		if (day1[i] == day2[i] && day1[i] == 'O') {
			count += 1;
		}
	}
	cout << count;
	
}

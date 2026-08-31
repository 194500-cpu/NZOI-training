#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector<int> yrs;
	for (int i = 0; i < n; ++i) {
		int input = 0;
		cin >> input;
		yrs.push_back(input);
	}
	
	for (int j = 0; j < n; ++j) {
		int current = yrs[j];
		
		if (current % 100 != 0 && current % 4 == 0) {
			if (current < 2024) {
				cout << current << " was a leap year." << "\n";
			} else {
				cout << current << " is a leap year." << "\n";
			}
			
		} else if (current % 400 == 0) {
			if (current < 2024) {
				cout << current << " was a leap year." << "\n";
			} else {
				cout << current << " is a leap year." << "\n";
			}
			
		} else {
			if (current < 2024) {
				cout << current << " was a common year." << "\n";
			} else {
				cout << current << " is a common year." << "\n";
			}
		}
	}
}

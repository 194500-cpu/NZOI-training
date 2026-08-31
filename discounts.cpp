#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string name = "";
	cin >> name;
	int pd, pc = 0;
	cin >> pd >> pc;
	float price = pd + pc * 0.01;
	int amount = 0;
	cin >> amount;
	int n = 0;
	cin >> n;
	vector<int> purchases;
	for (int i = 0; i < n; ++i) {
		int input = 0;
		cin >> input;
		purchases.push_back(input);
		
	}
	cout << name;
	for (int j = 0; j < n; ++j) {
		int current = purchases[j];
		int left = current / amount;
		float saved = left * price;
		int payfor = current - left;
		cout << "\n" << "Buy " << current << ", pay for " << payfor << ", get " << left << " free. " << "Save $"<< saved << ".";
		
	}
}

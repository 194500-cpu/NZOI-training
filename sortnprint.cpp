#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<pair<string, int>> months = {{"Jan", 0}, {"Feb", 0}, {"Mar", 0}, {"Apr", 0}, {"May", 0}, {"Jun", 0}, {"Jul", 0}, {"Aug", 0}, {"Sep", 0}, {"Oct", 0}, {"Nov", 0}, {"Dec", 0}};
	for (int i = 0; i < months.size(); ++i) {
		cout << months[i].first << ": ";
		cin >> months[i].second;
	}
	sort(months.begin(), months.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; 
    });
	int index = 1;
	for (auto datapair : months) {
		cout << index << ')' << ' ' << datapair.first << ':' << ' ' << datapair.second << "\n";
		++index;
	}
	
	return 0;
}

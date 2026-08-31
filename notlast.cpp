#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
	int n;
	cin >> n;
	unordered_map<string, int> milkCount = {{"Bessie", 0}, {"Elsie", 0}, {"Gertie", 0}, {"Annabelle", 0}, {"Maggie", 0}, {"Henrietta", 0}};
	for (int i = 0; i < n; ++i) {
		string name; int amount;
		cin >> name >> amount;
		milkCount[name] += amount;
	}
	vector<pair<string, int>> sortedcows(milkCount.begin(), milkCount.end());
	sort(sortedcows.begin(), sortedcows.end(), [](const auto& a, const auto& b) {
		return a.second < b.second;
	});
	
	int minoutput = sortedcows[0].second;
	string highest = "Tie";
	int amounthigh = 0;
	
	for (const auto &pairs : sortedcows) {
		if (pairs.second > minoutput) {
				highest = pairs.first;
				amounthigh = pairs.second;
				break;
			}
	}
	for (const auto &pairs : sortedcows) {
		if (pairs.second == amounthigh && pairs.first != highest) {
			highest = "Tie";
			break;
		}
	}
	cout << highest;
}
//~ AC

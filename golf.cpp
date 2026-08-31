#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	vector<pair<string, int>> scores;
	while (true) {
		string name; int cap; int score;
		cin >> name >> cap >> score;
		if (name == "X" && cap == 0 && score == 0) {
			break;
		}
		scores.push_back({name, score - cap});
	}
	stable_
	
	
	
	
	sort(scores.begin(), scores.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; 
    });
    for (auto pairs : scores) {
		cout << pairs.first << " " << pairs.second << "\n";
	}
}

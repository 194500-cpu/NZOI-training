#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

string word;
vector<string> words;


void search(int index, string current) {
	if (index == word.size()) {
		words.push_back(current);
		return;
	}
	search(index+1, current + word[index]);
	search(index+1, current);
	
	
}

int main() {
	cin >> word;
	search(0, "");
	set<string> filtered(words.begin(), words.end());
	cout << filtered.size() << "\n";
	for (string subset : filtered) {
		cout << subset << "\n";
	}
	
	
	
}

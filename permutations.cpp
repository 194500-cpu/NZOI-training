#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

string word;
vector<char> broken;
vector<string> words;

void permutate(vector<bool> &used, string current) {
	if (current.size() == word.size()) {
		words.push_back(current);
		return;
	}
	for (unsigned int i = 0; i < word.size(); ++i) {
		if (!used[i]) {
			used[i] = true;
			permutate(used, current + broken[i]);
			used[i] = false;
		}
	}
	
}



int main() {
	cin >> word;
	for (char &letter : word) {
		broken.push_back(letter);
	}
	vector<bool> used(word.size(), false);
	permutate(used, "");
	set<string> finally(words.begin(), words.end());
	
	cout << finally.size() << "\n";
	for (string thing : finally) {
		cout << thing << "\n";
	}
}

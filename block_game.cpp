#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
	int N = 0;
	cin >> N;
	vector<int> finalAmount(26, 0);
	for (int i = 0; i < N; ++i) {
		vector<int> word1(26, 0);
		vector<int> word2(26, 0);

		string w1, w2 = "";
		cin >> w1 >> w2;
		
		for (char chr : w1) {
			word1[chr - 'a'] += 1;
		}
		for (char chr : w2) {
			word2[chr - 'a'] += 1;
		}
		for (int j = 0; j < 26; ++j) {
			finalAmount[j] += max(word1[j], word2[j]);
		}
	}
	
	for (int h = 0; h < 26; ++h) {
		cout << finalAmount[h] << '\n';
	}
}


































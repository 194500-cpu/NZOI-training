#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	
	int M, N, K;
	cin >> M >> N >> K;
	
	vector<string> signal;
	
	for (int i = 0; i < M; ++i) {
		string line = "";
		cin >> line;
		signal.push_back(line);
		
	}
	
	vector<string> newSignal;
	
	for (int j = 0; j < M; ++j) {
		string multipliedRow = "";
		for (char item : signal[j]) {
			multipliedRow.append(K, item);
		}
		for (int k = 0; k < K; ++k) {
			newSignal.push_back(multipliedRow);
		}
		
	}
	for (string row : newSignal) {
		cout << row << "\n";
	}
}

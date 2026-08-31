#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> votes(10, 0);
    
    for (int i = 1; i < 10; ++i) {
        cin >> votes[i];
    }

    auto maximum = max_element(votes.begin(), votes.end());
    auto dist = distance(votes.begin(), maximum);
    cout << "Pet " << dist;



    return 0;
}
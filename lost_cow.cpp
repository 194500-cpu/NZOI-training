#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> elements = {10, 20, 30};
    int n = elements.size();

    int total_subsets = 1 << n; 

    cout << "Total subsets to generate: " << total_subsets << "\n\n";

    for (int mask = 0; mask < total_subsets; ++mask) {
        cout << "Mask " << mask << " (Binary representation): ";
        

        vector<int> current_subset;
        for (int i = 0; i < n; ++i) {
            if ((mask >> i) & 1) {
                current_subset.push_back(elements[i]);
            }
        }

        cout << "{ ";
        for (int x : current_subset) {
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}


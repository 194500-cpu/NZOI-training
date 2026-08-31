#include <vector>
#include <iostream>

using namespace std;

int main() {
	int V; int E;
	cin >> V >> E;
	vector<int> stack;
	
	vector<bool> visited(V, false);
	vector<vector<int>> adj(V);
	
	stack.push_back(0);
	
	while (size(stack) > 0) {
		node = stack.top();
		stack.pop();
		
		if (! visited[node]) {
			visited[node] = true;
			cout << node;
			for (int i = 0; i < size(adj[node]); ++i) {
				if (! visited[node]) {
					
				}
			}
		}
		
		
	}
}

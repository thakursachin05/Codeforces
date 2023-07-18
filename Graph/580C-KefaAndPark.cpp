#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e5 + 5;

vector<int> adj[MAXN]; // Adjacency list to store the tree

int n, m; // Number of vertices and maximum consecutive vertices with cats
int cats[MAXN]; // Array to store whether a vertex has a cat or not
bool visited[MAXN]; // Array to keep track of visited vertices

int countRestaurants(int vertex, int consecutiveCats) {
    visited[vertex] = true; // Mark the current vertex as visited

    // If the current vertex has a cat, increment the consecutiveCats count
    if (cats[vertex] == 1) {
        consecutiveCats++;
    } else {
        consecutiveCats = 0; // Reset the consecutiveCats count
    }

    // If the consecutiveCats count exceeds the maximum allowed, return 0
    if (consecutiveCats > m) {
        return 0;
    }

    // If the current vertex is a leaf (restaurant), return 1
    if (adj[vertex].size() == 1 && visited[adj[vertex][0]]) {
        return 1;
    }

    int totalRestaurants = 0;

    // Traverse the adjacent vertices
    for (int i = 0; i < adj[vertex].size(); i++) {
        int nextVertex = adj[vertex][i];

        // If the next vertex is not visited, recursively count the number of restaurants
        if (!visited[nextVertex]) {
            totalRestaurants += countRestaurants(nextVertex, consecutiveCats);
        }
    }

    return totalRestaurants;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> cats[i];
    }

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int totalRestaurants = countRestaurants(1, 0); // Start the DFS from vertex 1

    cout << totalRestaurants << endl;

    return 0;
}

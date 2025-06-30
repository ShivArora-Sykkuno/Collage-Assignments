#include <iostream.h>
#include <conio.h>
#include <limits.h>
#define MAX 10
class Graph {
private:
    int n;
    int adjMatrix[MAX][MAX];
public:
    Graph(int size) {
	n = size;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
		adjMatrix[i][j] = 0;
	    }
	}
    }
    void addEdge(int u, int v, int weight) {
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;
    }
    int minDistance(int dist[], int visited[]) {
        int min = INT_MAX, minIndex = -1;
        for (int v = 0; v < n; v++) {
            if (visited[v] == 0 && dist[v] <= min) {
                min = dist[v];
                minIndex = v;
            }
        }
        return minIndex;
    }
    void dijkstra(int src) {
        int dist[MAX];
        int visited[MAX] = {0};
        for (int i = 0; i < n; i++) {
            dist[i] = INT_MAX;
        }
        dist[src] = 0;
        for (int count = 0; count < n - 1; count++) {
            int u = minDistance(dist, visited);
            visited[u] = 1;
            for (int v = 0; v < n; v++) {
                if (!visited[v] && adjMatrix[u][v] && dist[u] != INT_MAX && dist[u] + adjMatrix[u][v] < dist[v]) {
                    dist[v] = dist[u] + adjMatrix[u][v];
                }
            }
        }
        cout << "\nVertex \t Distance from Source\n";
	for (int j = 0; j < n; j++) {
	    cout << j << " \t " << dist[j] << "\n";
        }
    }
    void executeGraph() {
        int edges, u, v, weight, start;
        cout << "Enter number of edges: ";
        cin >> edges;
        cout << "Enter edges (u v weight):\n";
        for (int i = 0; i < edges; i++) {
            cin >> u >> v >> weight;
            addEdge(u, v, weight);
        }
        cout << "Enter starting vertex for Dijkstra's algorithm: ";
        cin >> start;
        dijkstra(start);
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;
    Graph g(n);
    g.executeGraph();
    getch();
}
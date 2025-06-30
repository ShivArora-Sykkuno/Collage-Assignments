#include <iostream.h>
#include <conio.h>
#define MAX 100
class Graph {
private:
    int n; 
    int adjMatrix[MAX][MAX];
    int visited[MAX];
public:
    Graph(int size) {
        n = size;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                adjMatrix[i][j] = 0;
            }
            visited[i] = 0;
        }
    }
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
    void bfs(int start) {
        int queue[MAX], front = 0, rear = 0;
        for (int i = 0; i < n; i++) visited[i] = 0;
        queue[rear++] = start;
        visited[start] = 1;
        cout << "BFS Traversal: ";
        while (front < rear) {
            int node = queue[front++];
            cout << node << " ";
            for (int i = 0; i < n; i++) {
                if (adjMatrix[node][i] == 1 && visited[i] == 0) {
                    queue[rear++] = i;
                    visited[i] = 1;
                }
            }
        }
        cout << "\n";
    }
    void dfs(int start) {
        int stack[MAX], top = -1;
        for (int i = 0; i < n; i++) visited[i] = 0;
        stack[++top] = start;
        cout << "DFS Traversal: ";
        while (top >= 0) {
            int node = stack[top--];
            if (!visited[node]) {
                cout << node << " ";
                visited[node] = 1;
            }
            for (int i = n - 1; i >= 0; i--) {
                if (adjMatrix[node][i] == 1 && visited[i] == 0) {
                    stack[++top] = i;
                }
            }
        }
        cout << "\n";
    }
    void executeGraph() {
        int edges, u, v, start;
        cout << "Enter number of edges: ";
        cin >> edges;
        cout << "Enter edges (u v):\n";
        for (int i = 0; i < edges; i++) {
            cin >> u >> v;
            addEdge(u, v);
        }
        cout << "Enter starting vertex for traversal: ";
        cin >> start;
        bfs(start);
        dfs(start);
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

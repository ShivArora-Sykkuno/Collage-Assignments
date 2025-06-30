#include <iostream.h>
#include <conio.h>
#define MAX 20
#define INF 9999
class MST {
private:
    int V, E;
    int adj[MAX][MAX];     // For Prim
    int edges[MAX][3];     // For Kruskal: u, v, weight
public:
    MST() {
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                adj[i][j] = INF;
    }
    void readGraph() {
        cout << "Enter number of vertices and edges: ";
        cin >> V >> E;
        cout << "Enter edges (u v weight):\n";
        for (int i = 0; i < E; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            edges[i][0] = u;
            edges[i][1] = v;
            edges[i][2] = w;
            adj[u][v] = w;
            adj[v][u] = w;
        }
    }
    void kruskalMST() {
        int parent[MAX];
        int i, j, u, v;
        int count = 0, total = 0;
        for (i = 0; i < V; i++)
            parent[i] = i;
        // Simple Bubble Sort by weight
        for (i = 0; i < E - 1; i++) {
            for (j = 0; j < E - i - 1; j++) {
                if (edges[j][2] > edges[j + 1][2]) {
                    int temp0 = edges[j][0];
                    int temp1 = edges[j][1];
                    int temp2 = edges[j][2];
                    edges[j][0] = edges[j + 1][0];
                    edges[j][1] = edges[j + 1][1];
                    edges[j][2] = edges[j + 1][2];
                    edges[j + 1][0] = temp0;
                    edges[j + 1][1] = temp1;
                    edges[j + 1][2] = temp2;
                }
            }
        }
        cout << "\nKruskal's MST:\n";
        for (i = 0; i < E && count < V - 1; i++) {
            u = find(parent, edges[i][0]);
            v = find(parent, edges[i][1]);
            if (u != v) {
                cout << edges[i][0] << " - " << edges[i][1] << " : " << edges[i][2] << "\n";
                total += edges[i][2];
                unionSet(parent, u, v);
                count++;
            }
        }
        cout << "Total weight: " << total << "\n";
    }
    void primMST() {
        int visited[MAX] = {0};
        int min, u = 0, v = 0, total = 0;
        int count = 0;
        visited[0] = 1;
        cout << "\nPrim's MST:\n";
        while (count < V - 1) {
            min = INF;
            for (int i = 0; i < V; i++) {
                if (visited[i]) {
                    for (int j = 0; j < V; j++) {
                        if (!visited[j] && adj[i][j] < min) {
                            min = adj[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
            cout << u << " - " << v << " : " << adj[u][v] << "\n";
            visited[v] = 1;
            total += adj[u][v];
            count++;
        }
        cout << "Total weight: " << total << "\n";
    }
    int find(int parent[], int i) {
        while (parent[i] != i)
            i = parent[i];
        return i;
    }
    void unionSet(int parent[], int u, int v) {
        parent[u] = v;
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    MST mst;
    mst.readGraph();
    int choice;
    cout << "\nChoose MST Algorithm:\n1. Kruskal\n2. Prim\nEnter choice: ";
    cin >> choice;
    if (choice == 1)
        mst.kruskalMST();
    else if (choice == 2)
        mst.primMST();
    else
        cout << "Invalid choice";
    getch();
}
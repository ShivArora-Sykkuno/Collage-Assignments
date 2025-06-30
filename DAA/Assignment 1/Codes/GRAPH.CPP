#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10   
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};
class Graph {
private:
    int adjMatrix[MAX][MAX]; 
    Node* adjList[MAX];
    int vertices;
public:
    Graph(int n) {
        vertices = n;
        initMatrix();
        initList();
    }
    void initMatrix() {
	for (int i = 0; i < vertices; i++) {
	    for (int j = 0; j < vertices; j++) {
		adjMatrix[i][j] = 0;
	    }
	}
    }
    void addEdgeMatrix(int u, int v) {
	adjMatrix[u][v] = 1;
	adjMatrix[v][u] = 1;
    }
    void displayMatrix() {
	cout << "Adjacency Matrix:\n";
	for (int i = 0; i < vertices; i++) {
	    for (int j = 0; j < vertices; j++) {
		cout << adjMatrix[i][j] << " ";
	    }
	    cout << "\n";
	}
    }
    void initList() {
	for (int i = 0; i < vertices; i++) {
	    adjList[i] = NULL;
	}
    }
    void addEdgeList(int u, int v) {
	Node* newNode = new Node(v);
	newNode->next = adjList[u];
	adjList[u] = newNode;
	newNode = new Node(u);
	newNode->next = adjList[v];
	adjList[v] = newNode;
    }
    void displayList() {
	cout << "\nAdjacency List:\n";
	for (int i = 0; i < vertices; i++) {
	    cout << i << " -> ";
	    Node* temp = adjList[i];
	    while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	    }
	    cout << "\n";
	}
    }
};
void main() {
    clrscr();
    int n, edges, u, v;
    cout << "Shiv Arora"<< endl;
    cout << "Enter number of vertices: ";
    cin >> n;
    Graph g(n);
    cout << "Enter number of edges: ";
    cin >> edges;
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
	cin >> u >> v;
	g.addEdgeMatrix(u, v);
	g.addEdgeList(u, v);
    }
    g.displayMatrix();
    g.displayList();
    getch();

}
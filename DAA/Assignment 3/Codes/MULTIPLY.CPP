#include <iostream.h>
#include <conio.h>
#define MAX 32  // Maximum matrix size
class Strassen {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int n;
public:
    void run() {
        cout << "Enter matrix size (2^n, max " << MAX << "): ";
        cin >> n;
        if (n != 1 && n != 2 && n != 4 && n != 8) {
            cout << "Only 2^n sizes (1, 2, 4, 8, 16, 32) allowed.\n";
            return;
        }
        cout << "Enter elements of Matrix A:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> A[i][j];
        cout << "Enter elements of Matrix B:\n";
	for (int s = 0; s < n; s++)
	    for (int t = 0; t < n; t++)
		cin >> B[s][t];
        strassenMultiply(A, B, C, n);
        cout << "\nResultant Matrix C = A * B:\n";
        display(C, n);
        getch();
    }
    void display(int M[MAX][MAX], int size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                cout << M[i][j] << " ";
            cout << "\n";
        }
    }
    void add(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int size) {
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                result[i][j] = A[i][j] + B[i][j];
    }
    void subtract(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int size) {
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                result[i][j] = A[i][j] - B[i][j];
    }
    void strassenMultiply(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int size) {
        if (size == 1) {
            C[0][0] = A[0][0] * B[0][0];
            return;
        }
        int newSize = size / 2;
        int A11[MAX][MAX], A12[MAX][MAX], A21[MAX][MAX], A22[MAX][MAX];
        int B11[MAX][MAX], B12[MAX][MAX], B21[MAX][MAX], B22[MAX][MAX];
        int C11[MAX][MAX], C12[MAX][MAX], C21[MAX][MAX], C22[MAX][MAX];
        int M1[MAX][MAX], M2[MAX][MAX], M3[MAX][MAX], M4[MAX][MAX];
        int M5[MAX][MAX], M6[MAX][MAX], M7[MAX][MAX];
        int T1[MAX][MAX], T2[MAX][MAX];
        for (int i = 0; i < newSize; i++) {
            for (int j = 0; j < newSize; j++) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + newSize];
                A21[i][j] = A[i + newSize][j];
                A22[i][j] = A[i + newSize][j + newSize];
                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + newSize];
                B21[i][j] = B[i + newSize][j];
                B22[i][j] = B[i + newSize][j + newSize];
            }
        }
        add(A11, A22, T1, newSize);
        add(B11, B22, T2, newSize);
        strassenMultiply(T1, T2, M1, newSize);
        add(A21, A22, T1, newSize);
        strassenMultiply(T1, B11, M2, newSize);
        subtract(B12, B22, T1, newSize);
        strassenMultiply(A11, T1, M3, newSize);
        subtract(B21, B11, T1, newSize);
        strassenMultiply(A22, T1, M4, newSize);
        add(A11, A12, T1, newSize);
        strassenMultiply(T1, B22, M5, newSize);
        subtract(A21, A11, T1, newSize);
        add(B11, B12, T2, newSize);
        strassenMultiply(T1, T2, M6, newSize);
        subtract(A12, A22, T1, newSize);
        add(B21, B22, T2, newSize);
        strassenMultiply(T1, T2, M7, newSize);
        add(M1, M4, T1, newSize);
        subtract(T1, M5, T2, newSize);
        add(T2, M7, C11, newSize);
        add(M3, M5, C12, newSize);
        add(M2, M4, C21, newSize);
        subtract(M1, M2, T1, newSize);
        add(T1, M3, T2, newSize);
        add(T2, M6, C22, newSize);
	for (int q = 0; q < newSize; q++) {
	    for (int j = 0; j < newSize; j++) {
		C[q][j] = C11[q][j];
		C[q][j + newSize] = C12[q][j];
		C[q + newSize][j] = C21[q][j];
		C[q + newSize][j + newSize] = C22[q][j];
	    }
        }
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    Strassen s;
    s.run();
    getch();
}
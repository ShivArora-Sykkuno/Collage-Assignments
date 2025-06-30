#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define ITERATIONS 1000
class Array {
public:
    int arr[SIZE];
    void generate() {
        srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
            arr[i] = rand() % 1000;
        }
    }
    void copy(int source[]) {
	for (int i = 0; i < SIZE; i++) {
            arr[i] = source[i];
        }
    }
    void print() {
	for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class Sorting {
public:
    void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void insertionSort(int arr[], int size) {
	for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
    void merge(int arr[], int left, int mid, int right) {
        int n1 = mid - left + 1, n2 = right - mid;
        int L[SIZE], R[SIZE];
	for (int a = 0; a < n1; a++) L[a] = arr[left + a];
        for (int b = 0; b < n2; b++) R[b] = arr[mid + 1 + b];
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
        }
        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];
    }
    void mergeSort(int arr[], int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora" << endl;
    Array original, temp;
    Sorting sorter;
    clock_t start, end;
    double timeTaken;
    original.generate();
    cout << "Original Array: ";
    original.print();
    start = clock();
    for (int i = 0; i < ITERATIONS; i++) {
        temp.copy(original.arr);
        sorter.bubbleSort(temp.arr, SIZE);
    }
    end = clock();
    timeTaken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC / ITERATIONS;
    cout << "\nBubble Sorted Array: ";
    temp.print();
    cout << "Avg Bubble Sort Time: " << timeTaken << " ms" << endl;
    start = clock();
    for (int j = 0; j < ITERATIONS; j++) {
	temp.copy(original.arr);
	sorter.insertionSort(temp.arr, SIZE);
    }
    end = clock();
    timeTaken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC / ITERATIONS;
    cout << "\nInsertion Sorted Array: ";
    temp.print();
    cout << "Avg Insertion Sort Time: " << timeTaken << " ms" << endl;
    start = clock();
    for (int k = 0; k < ITERATIONS; k++) {
	temp.copy(original.arr);
	sorter.mergeSort(temp.arr, 0, SIZE - 1);
    }
    end = clock();
    timeTaken = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC / ITERATIONS;
    cout << "\nMerge Sorted Array: ";
    temp.print();
    cout << "Avg Merge Sort Time: " << timeTaken << " ms" << endl;
    getch();
    getch();
}
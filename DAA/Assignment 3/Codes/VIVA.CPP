#include <iostream.h>
#include <conio.h>
class QuickSort {
    int arr[100], n;
    int cmpFirst, swpFirst;
    int cmpMid, swpMid;
    int cmpLast, swpLast;
public:
    void input() {
	cout << "Enter number of elements: ";
	cin >> n;

	cout << "Enter " << n << " elements:\n";
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
    }
    void displayArray(int a[]) {
	for (int i = 0; i < n; i++) {
	    cout << a[i] << " ";
	}
	cout << "\n";
    }
    void copyArray(int src[], int dest[]) {
	for (int i = 0; i < n; i++) {
	    dest[i] = src[i];
	}
    }
    void quickSortFirst(int a[], int low, int high) {
	if (low < high) {
	    int p = partitionFirst(a, low, high);
	    quickSortFirst(a, low, p - 1);
	    quickSortFirst(a, p + 1, high);
	}
    }
    int partitionFirst(int a[], int low, int high) {
	int pivot = a[low];
	int i = low + 1;
	int j = high;
	while (i <= j) {
	    while (i <= high && a[i] <= pivot) {
		cmpFirst++;
		i++;
	    }
	    while (j >= low && a[j] > pivot) {
		cmpFirst++;
		j--;
	    }
	    if (i < j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		swpFirst++;
	    }
	}
	int temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	swpFirst++;
	return j;
    }
    void quickSortMiddle(int a[], int low, int high) {
	if (low < high) {
	    int p = partitionMiddle(a, low, high);
	    quickSortMiddle(a, low, p - 1);
	    quickSortMiddle(a, p + 1, high);
	}
    }
    int partitionMiddle(int a[], int low, int high) {
	int mid = (low + high) / 2;
	int temp = a[low];
	a[low] = a[mid];
	a[mid] = temp;
	swpMid++;
	int pivot = a[low];
	int i = low + 1;
	int j = high;
	while (i <= j) {
	    while (i <= high && a[i] <= pivot) {
		cmpMid++;
		i++;
	    }
	    while (j >= low && a[j] > pivot) {
		cmpMid++;
		j--;
	    }
	    if (i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		swpMid++;
	    }
	}
	temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	swpMid++;
	return j;
    }
    void quickSortLast(int a[], int low, int high) {
	if (low < high) {
	    int p = partitionLast(a, low, high);
	    quickSortLast(a, low, p - 1);
	    quickSortLast(a, p + 1, high);
	}
    }
    int partitionLast(int a[], int low, int high) {
	int temp = a[low];
	a[low] = a[high];
	a[high] = temp;
	swpLast++;
	int pivot = a[low];
	int i = low + 1;
	int j = high;
	while (i <= j) {
	    while (i <= high && a[i] <= pivot) {
		cmpLast++;
		i++;
	    }
	    while (j >= low && a[j] > pivot) {
		cmpLast++;
		j--;
	    }
	    if (i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		swpLast++;
	    }
	}
	temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	swpLast++;
	return j;
    }
    void sortAndDisplayAll() {
	int tempArr[100];
	cmpFirst = swpFirst = 0;
	copyArray(arr, tempArr);
	quickSortFirst(tempArr, 0, n - 1);
	cout << "\nSorted Array:\n";
	displayArray(tempArr);
    }

};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    QuickSort qs;
    qs.input();
    qs.sortAndDisplayAll();
    getch();
}















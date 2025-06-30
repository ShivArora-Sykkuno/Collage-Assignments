#include <iostream.h>
#include <conio.h>
class BinarySearch {
    int arr[100], size, comparisons;
public:
    BinarySearch() {
        comparisons = 0;
        size = 0;
    }
    void input() {
        cout << "Enter the number of elements: ";
        cin >> size;
        cout << "Enter " << size << " sorted elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void iterativeSearch() {
        int key;
        comparisons = 0;
        cout << "\nEnter element to search (Iterative): ";
        cin >> key;
        int low = 0, high = size - 1, mid, index = -1;
        while (low <= high) {
            comparisons++;
            mid = (low + high) / 2;
            if (arr[mid] == key) {
                index = mid;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (index == -1)
            cout << "Element not found.\n";
        else
            cout << "Element found at index: " << index << "\n";
        cout << "Comparisons made: " << comparisons << "\n";
    }
    void recursiveSearchWrapper() {
        int key;
        comparisons = 0;
        cout << "\nEnter element to search (Recursive): ";
        cin >> key;
        int index = recursiveSearch(key, 0, size - 1);
        if (index == -1)
            cout << "Element not found.\n";
        else
            cout << "Element found at index: " << index << "\n";
        cout << "Comparisons made: " << comparisons << "\n";
    }
    int recursiveSearch(int key, int low, int high) {
        if (low > high)
            return -1;
        comparisons++;
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            return recursiveSearch(key, mid + 1, high);
        else
            return recursiveSearch(key, low, mid - 1);
    }
    void run() {
        input();
        iterativeSearch();
        recursiveSearchWrapper();
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    BinarySearch bs;
    bs.run();
    getch();
}
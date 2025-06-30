#include <iostream.h>
#include <conio.h>
#include <math.h>
// Function 1: T(n) = 2T(n/2) + n
int recurrence1(int n) {
    if (n <= 1)
	return 1;
    return 2 * recurrence1(n / 2) + n;
}
// Function 2: T(n) = T(n/2) + 1
int recurrence2(int n) {
    if (n <= 1)
	return 1;
    return recurrence2(n / 2) + 1;
}
float assume_nlogn(int n, float c) {
    return c * n * log(n) / log(2);
}
float assume_logn(int n, float c) {
    return c * log(n) / log(2);
}
void main() {
    clrscr();
    int choice;
    float c;
    cout << "Choose recurrence:\n";
    cout << "1. T(n) = 2T(n/2) + n\n";
    cout << "2. T(n) = T(n/2) + 1\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
	cout << "Assuming T(n) = c * n log n\n";
    } else {
	cout << "Assuming T(n) = c * log n\n";
    }
    cout << "Enter constant c: ";
    cin >> c;
    cout << "\nn\tT(n)\tAssumed Bound\n";
    cout << "-------------------------------\n";
    for (int n = 2; n <= 64; n *= 2) {
	int actual;
	float assumed;
	if (choice == 1) {
	    actual = recurrence1(n);
	    assumed = assume_nlogn(n, c);
	} else {
	    actual = recurrence2(n);
	    assumed = assume_logn(n, c);
	}
	cout << n << "\t" << actual << "\t" << assumed << "\n";
    }
    getch();
}
#include <iostream.h>
#include <conio.h>
#define MAX 100
class Knapsack {
    float weights[MAX], values[MAX], ratio[MAX];
    int n;
    float capacity;
public:
    void run() {
        cout << "Enter number of items (max " << MAX << "): ";
        cin >> n;
        cout << "Enter weights of items:\n";
        for (int i = 0; i < n; i++)
            cin >> weights[i];
	cout << "Enter values of items:\n";
	for (int j = 0; j < n; j++)
	    cin >> values[j];
	cout << "Enter capacity of knapsack: ";
	cin >> capacity;
	for (int k = 0; k < n; k++)
	    ratio[k] = values[k] / weights[k];
        sortItems();
        float maxValue = fillKnapsack();
        cout << "\nMaximum value in knapsack = " << maxValue;
    }
    void sortItems() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ratio[i] < ratio[j]) {
                    float temp;
                    temp = ratio[i];
                    ratio[i] = ratio[j];
                    ratio[j] = temp;
                    temp = weights[i];
                    weights[i] = weights[j];
                    weights[j] = temp;
                    temp = values[i];
                    values[i] = values[j];
                    values[j] = temp;
                }
            }
        }
    }
    float fillKnapsack() {
        float totalValue = 0.0;
        float currWeight = 0.0;
        for (int i = 0; i < n; i++) {
            if (currWeight + weights[i] <= capacity) {
                currWeight += weights[i];
                totalValue += values[i];
            } else {
                float remain = capacity - currWeight;
                totalValue += ratio[i] * remain;
                break;
            }
        }
        return totalValue;
    }
};
void main() {
    clrscr();
    cout << "Shiv Arora"<< endl;
    Knapsack k;
    k.run();
    getch();
}
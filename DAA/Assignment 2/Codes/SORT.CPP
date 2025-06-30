#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main(){
    clrscr();
    cout<< "Shiv Arora" << endl;
    int choice;
    cout<<"Choose one of the following options: " << endl;
    cout<< "1) T(n) = 2T(n/2) + n" << endl;
    cout<< "2) T(n) = T(n/2) + 1" << endl;
    cin >> choice;
    int method;
    cout<<"Choose one of the following methods: " << endl;
    cout<< "1) Substitution Method" << endl;
    cout<< "2) Master Theorem" << endl;
    cin>> method;
    
    if(choice == 1 && method == 1) {
        cout << "T(n) = 2T(n/2) + n" << endl;
        cout << "Assume T(n) = nlogn" << endl;
        cout << "T(n) = 2T(n/2) + n" << endl;
        cout << "T(n) = 2(n/2)log(n/2) + n" << endl;
        cout << "T(n) = nlog(n/2) + n" << endl;
        cout << "T(n) = n(logn - log2) + n" << endl;
        cout << "T(n) = nlogn - nlog2 + n" << endl;
        cout << "T(n) = nlogn - n + n" << endl;
        cout << "T(n) = Theta(nlogn)" << endl;
    }
    else if(choice == 1 && method == 2){
        cout<< "Master Theorem: T(n) = aT(n/b) + f(n)"<<endl;
        cout<< "a = 2, b = 2, f(n) = n"<<endl;
        cout<< "n^log_b(a) = n^log_2(2) = n^1"<<endl;
        cout<< "as f(n) = n^log_b(a)"<<endl;
        cout<<"Case 3: f(n) = n^log_b(a) => T(n) = Theta(f(n) * logn)"<<endl;
        cout << "T(n) = Theta(nlogn)" << endl;
    }
    else if(choice == 2 && method == 1){
        cout << "T(n) = T(n/2) + 1" << endl;
        cout << "Assume T(n) = 1" << endl; 
        cout << "T(n) = T(n/2) + 1" << endl;
        cout << "T(n) = T(n/2) + 1" << endl;
        cout << "T(n) = T(n/4) + 1 + 1" << endl;
        cout << "T(n) = T(n/8) + 1 + 1 + 1" << endl;
        cout << "T(n) = T(n/2^k) + k" << endl;
        cout << "T(n) = T(1) + log(n)" << endl;
        cout << "T(n) = 1 + log(n)" << endl;
        cout << "T(n) = Theta(logn)" << endl;
    }
    else if(choice == 2 && method == 2){
        cout<< "Master Theorem: T(n) = aT(n/b) + f(n)"<<endl;
        cout<< "a = 1, b = 2, f(n) = 1"<<endl;
        cout<< "n^log_b(a) = n^log_2(1) = n^0 = 1"<<endl;
        cout<< "as f(n) = n^log_b(a)"<<endl;
        cout<<"Case 3: f(n) = n^log_b(a) => T(n) = Theta(f(n) * logn)"<<endl;
        cout << "T(n) = Theta(logn)" << endl;
    }
    else{
	cout << "Invalid choice" << endl;
    }
    cout << "End of program" << endl;
    getch();
}
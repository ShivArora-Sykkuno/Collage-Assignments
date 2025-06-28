#include<stdio.h>
#include<math.h>
void main(){
    int size;
    printf("ENTER the number of elements\n");
    scanf("%d", &size);
    // The X column
    int arrX[size];
    printf("ENTER X elements\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arrX[i]);
    }
    // THe F Cloumn
    int arrF[size];
    printf("ENTER the Frequency\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arrF[i]);
    }
    // Taking log values
    double logg[size];
    for(int i=0; i<size; i++){
        logg[i] = log(arrX[i]);
    }
    // Taking submission of F column
    int freq_sum = 0;
    for(int i=0; i<size; i++){
        freq_sum += arrF[i];
    }
    // Making f/x column
    double arrFX[size];
    for(int i=0; i<size; i++){
        arrFX[i] = (double)arrF[i] / (double)arrX[i];
    }
    // Printing the table
    printf("\n X \t F \t log(x) \t f/x\n");
    for(int i=0; i<size; i++){
        printf("%d \t %d \t %.4lf \t %.4lf\n", arrX[i], arrF[i], logg[i], arrFX[i]);
    }
    //  ------------------------------------ Calculating G.M ------------------------------------
    // Taking Log array sum
    double log_sum = 0;
    for(int i=0; i<size; i++){
        log_sum += logg[i];
    }
    // Taking antilog
    double result_gm  = exp(log_sum / size);
    printf("Geometric Mean = %.3lf\n", result_gm);
    // ------------------------------------ Calculating H.M ------------------------------------
    // Taking f/x array sum
    double fx_sum = 0;
    for(int i=0; i<size; i++){
        fx_sum += arrFX[i];
    }
    // Calculating sum 
    double result_hm = freq_sum / fx_sum;
    printf("Harmonix mean Mean = %.3lf", result_hm);

}

// Example 1
// 10 12 14 16 18 20 22
// 2 5 8 10 7 4 4


// Example 2
// 70 65 15 8 10 22 28 30 34 7
// 2 5 8 10 7 4 4 12 9 3
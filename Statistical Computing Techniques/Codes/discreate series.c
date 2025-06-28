#include<stdio.h>
void main(){
    int size;   
    printf("Enter the number of observations  ");
    scanf("%d", &size);
    int arrX[size];
    printf("Enter the X values\n");      
    for(int i=0; i<size; i++){
        scanf("%d", &arrX[i]);
    }
    int arrF[size];
    printf("Enter the F values\n");      
    for(int i=0; i<size; i++){
        scanf("%d", &arrF[i]);
    }
    // Sorting the X and Y table
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arrX[i]> arrX[j]){
                int x = arrX[i];
                int f  = arrF[i];

                arrX[i] = arrX[j];
                arrF[i] = arrF[j];

                arrX[j] = x;
                arrF[j] = f;
    } } }
    // Making of TABLE
    int FX[size], CF[size];
    int add = 0;
    for(int i=0; i<size; i++){
        FX[i] = arrX[i] * arrF[i];
        add += arrF[i];
        CF[i] = add;
        
    }
    // Printing the table
    printf("X\tF\tF*X\tCF\n");
    for(int i=0; i<size; i++){
        printf("%d\t%d\t%d\t%d\n", arrX[i], arrF[i], FX[i], CF[i]);
    }
    //  MEAN
    float sumFX = 0;
    float sumF = 0;
    for(int i=0; i<size; i++){
        sumFX += FX[i];
        sumF += arrF[i];
    }
    float mean = sumFX / sumF;
    printf("\nMean = %.2f\n", mean);
    // MEDIAN
    float term = (sumF + 1) / 2;
    int position = 0;
    for(int i=0; i<size; i++){
        if(CF[i] < term){
            continue;
        }else{
            position = i;
            break;
        }}
    printf("Median = %.d\n", arrX[position]);
    // MODE
    int highest = 0;
    int pos = 0;
    for(int i=0; i< size; i++){
        if(arrF[i] > highest) {
            highest = arrF[i];
            pos = i;
        }
    }
    printf("Mode = %d\n", arrX[pos]);    
}

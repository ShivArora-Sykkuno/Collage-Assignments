#include<stdio.h>
void main(){
    int size; 
    printf("Enter the number of observations  ");
    scanf("%d", &size);
    int upperB[size];
    int lowerB[size];
    printf("Enter the upper and lower bound values\n");      
    for(int i=0; i<size; i++){
        scanf("%d%d", &lowerB[i], &upperB[i]);
    }
    int arrF[size];
    printf("Enter the F values\n");      
    for(int i=0; i<size; i++){
        scanf("%d", &arrF[i]);
    }
    //  Making the table
    int mid_value[size];
    int FM[size];
    int CF[size];
    int add = 0;
    for(int i=0; i< size; i++){
        mid_value[i] = (upperB[i] + lowerB[i]) / 2;
        FM[i] = mid_value[i] * arrF[i];
        add += arrF[i];
        CF[i] = add;
    }
    // Printing the table
    printf("intervals\tFreq\tmid values(M)\tF*M\tCF\n");
    for(int i=0; i<size; i++){
        printf("%d-%d\t\t%d\t\t%d\t%d\t%d\n",lowerB[i], upperB[i], arrF[i], mid_value[i], FM[i], CF[i]);
    }
    //   MEAN
    float sumFX = 0;
    float sumF = 0;
    for(int i=0; i<size; i++){
        sumFX += FM[i];
        sumF += arrF[i];
        
    }
    float mean = sumFX / sumF;
    printf("\nMean = %.2f\n", mean);
    // MEDIAN
    float term = sumF / 2;
    int positionCF = 0;
    int positionF = 0;
    for(int i=0; i<size; i++){
        if(CF[i] < term){
            int a;
        }else{
            positionF = i;
            positionCF = i - 1;
            break;
        }
    }
    float x = (term - CF[positionCF])/ arrF[positionF];
    float y = (upperB[positionF] - lowerB[positionF]);
    float z = lowerB[positionF];
    printf("Median = %.2f\n", x * y + z);
    // // MODE
    int highest = 0;
    int f1, f2 , f0 = 0;
    for(int i=0; i< size; i++){
        if(arrF[i] > highest) {
            highest = arrF[i];
            f1 = i;
        }
    }
    if(arrF[f1] == (size - 1)){
        f0 = f1 - 1;
        f2 = 0;
    }else if(arrF[f1] == 0){
        f0 = 0;
        f2 = f1 + 1;
    }else{
        f0 = f1 -1;
        f2 = f1 + 1;
    }
    float a = upperB[positionF] - lowerB[positionF];
    float b = ((2 * arrF[f1]) - arrF[f0] - arrF[f2]);
    float c = (arrF[f1] - arrF[f0]);
    float d = lowerB[f1];
    float a1 =  c/ b;
    float a2 = a1 * a;
    printf("Mode =  %.2f", a2 + d);
}

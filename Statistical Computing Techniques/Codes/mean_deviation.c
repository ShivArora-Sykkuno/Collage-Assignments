#include<stdio.h>
#include <math.h>
void main(){
    int size;
    printf("Enter the number of elements\n");
    scanf("%d", &size);
    int upper[size], lower[size];
    printf("Enter the upper and lower bound values\n");      
    for(int i=0; i<size; i++){
        scanf("%d%d", &lower[i], &upper[i]);
    }
    int arrF[size];
    printf("Enter the frequency values\n");      
    for(int i=0; i<size; i++){
        scanf("%d", &arrF[i]);
    }
    // Mid value
    int arrX[size];      
    for(int i=0; i<size; i++){
        arrX[i] = (upper[i] + lower[i]) /  2;
    }
    // cf
    int arrCF[size];
    int temp_sum= 0;
    for(int i=0; i<size; i++){
        temp_sum += arrF[i];
        arrCF[i] = temp_sum;
    }
    // fx
    int arrFX[size];      
    for(int i=0; i<size; i++){
        arrFX[i] = arrX[i] * arrF[i];
    }
    // Mean
    int  sumFX=0, sumF=0;      
    for(int i=0; i<size; i++){
        sumF += arrF[i];
        sumFX += arrFX[i];
    }
    float mean = (float)sumFX / (float) sumF; 
    // Median
    float term = sumF / 2;
    int positionCF = 0;
    int positionF = 0;
    for(int i=0; i<size; i++){
        if(arrCF[i] < term){
            int a;
        }else{
            positionF = i;
            positionCF = i - 1;
            break;
        }
    }
    float x = (term - arrCF[positionCF])/ arrF[positionF];
    float y = (upper[positionF] - lower[positionF]);
    float z = lower[positionF];
    float median =  x * y + z;

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
    float a = upper[positionF] - lower[positionF];
    float b = ((2 * arrF[f1]) - arrF[f0] - arrF[f2]);
    float c = (arrF[f1] - arrF[f0]);
    float d = lower[f1];
    float a1 =  c/ b;
    float a2 = a1 * a;
    float mode = a2 + d;
    //  |x - mean|
    float xbar[size];      
    for(int i=0; i<size; i++){
        xbar[i] = fabs((float)arrX[i] - mean);
    }
    // f * |x - mean|
    float xbarf[size];      
    for(int i=0; i<size; i++){
        xbarf[i] = (float)xbar[i] * (float)arrF[i];
    }
    // |x - median| 
    float median_xbar[size];      
    for(int i=0; i<size; i++){
        median_xbar[i] = fabs((float)arrX[i] - median);
    }
    // f * |x - median|
    float median_xbarf[size];      
    for(int i=0; i<size; i++){
        median_xbarf[i] = (float)median_xbar[i] * (float)arrF[i];
    }
    // |x - mode| 
    float mode_xbar[size];      
    for(int i=0; i<size; i++){
        mode_xbar[i] = fabs((float)arrX[i] - mode);
    }
    // f * |x - mode|
    float mode_xbarf[size];      
    for(int i=0; i<size; i++){
        mode_xbarf[i] = (float)mode_xbar[i] * (float)arrF[i];
    }
    // Print Table
    printf("Interval\tfreq\tX\tCF\tf*x\t|x-mean|\tf*|x-mean|\t|x-median|\tf*|x-median|\t|x-mode|\tf*|x-mode|\n");
    for(int i=0; i<size; i++){
        printf("%d-%d\t\t%d\t%d\t%d\t%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",lower[i], upper[i], arrF[i], arrX[i], arrCF[i], arrFX[i], xbar[i], xbarf[i], median_xbar[i], median_xbarf[i], mode_xbar[i], mode_xbarf[i]);
    }
    // Meadian Deviation from Mean
    float MEAN;
    for(int i=0;i< size; i++){
        MEAN += xbarf[i];
    }
    printf("\nMean deviation from MEAN is %.3f", MEAN/ (float)sumF);
    // Meadian Deviation from Median
    float MEDAIN;
    for(int i=0;i< size; i++){
        MEDAIN += median_xbarf[i];
    }
    printf("\nMean deviation from MEDAIN is %.3f", MEDAIN/ (float)sumF);
    // Meadian Deviation from Mean
    float MODE;
    for(int i=0;i< size; i++){
        MODE += mode_xbarf[i];
    }
    printf("\nMean deviation from MODE is %.3f", MODE/ (float)sumF);
}
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
     //  x - mean
    float xbar[size];      
    for(int i=0; i<size; i++){
        xbar[i] = (float)arrX[i] - mean;
    }
    //  x - mean ^ 2
    float square_xbar[size];      
    for(int i=0; i<size; i++){
        square_xbar[i] = xbar[i] * xbar[i];
    }
    // f * (x - mean)^2
    float xbarf[size];      
    for(int i=0; i<size; i++){
        xbarf[i] = (float)square_xbar[i] * (float)arrF[i];
    }
    // Print Table
    printf("Interval\tfreq\tX\tf*x\t(x-mean)\t(x-mean)^2\tf*(x-mean)^2\n");
    for(int i=0; i<size; i++){
        printf("%d-%d\t\t%d\t%d\t%d\t%.2f\t\t%.2f\t\t%.2f\n",lower[i], upper[i], arrF[i], arrX[i], arrFX[i], xbar[i], square_xbar[i], xbarf[i]);
    }
    // Standard Deviation 
    float sum_xbarf;
    for(int i=0; i< size; i++){
        sum_xbarf += xbarf[i];
    }
    float SD = sqrt(sum_xbarf / sumF);
    printf("\nStandard Deviation is %.2f", SD);

}
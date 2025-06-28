#include<stdio.h>
#include<math.h>
void main(){
    int size;
    printf("Enter the size of the duration: ");
    scanf("%d", &size);
    int demand[size];
    printf("Enter the demand:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &demand[i]);
    }
    float alpha;
    printf("Enter the alpha value:\n");
    scanf("%f", &alpha);
    float intial;
    printf("Enter the intial value of the forcaste:\n");
    scanf("%f", &intial);

    // Forcaste table 
    float forcaste[size];
    forcaste[0]= intial;
    for(int i=1; i<size; i++){
        forcaste[i] =  forcaste[i-1] + ((float)alpha * (float)(demand[i-1] - forcaste[i-1]));
    }

    // Percent Error Table
    float pe[size];
    for(int i=0; i<size; i++){
        pe[i] = (float)((demand[i] - forcaste[i]) / (float)demand[i]) * 100.00;
    }

    // Mean percent Table
    float mpe[size], mean_percent_error = 0;
    for(int i=0; i<size; i++){
        mpe[i] = pe[i];
        mean_percent_error += pe[i] ; 
    }

    // Mean Absolute Percent Error Table
    float mape[size], mean_percent_absolute_error;
    for(int i=0; i<size; i++){
        mape[i] = fabs(pe[i]);
        mean_percent_absolute_error += fabs(pe[i]);
    }

    // Print table
    printf("Duration\tDemand\tForcaste\tPercentError\t  MeanPercentAbsoluteError\n");
    for (int i = 0; i < size; i++){
        printf("%d\t\t%d\t%f\t%f\t \t %f\n", i+1, demand[i], forcaste[i], pe[i], mape[i]);
    }
    float pred = forcaste[size-1] + alpha * (demand[size-1] - forcaste[size-1]);
    printf("%d\t\t0\t%f", size+1, pred);
    printf("\n");
    
    // Mean Errors
    printf("Mean Percent Error = %.2f%%\n", mean_percent_error / size);
    printf("Mean Percent Absolute Error = %.2f%%\n", mean_percent_absolute_error / size);
    printf("Forcaste of %dth month = %.2f", size+1, pred);
}
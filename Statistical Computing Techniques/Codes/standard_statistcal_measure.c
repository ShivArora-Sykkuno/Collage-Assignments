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
    // Mean Error Table
    float me[size], mean_error = 0;
    for(int i=0; i<size; i++){
        me[i] = demand[i] - forcaste[i];
        mean_error += demand[i] - forcaste[i];
    }
    // Mean Square Error Table
    float mse[size], mean_square_error = 0;
    for(int i=0; i<size; i++){
        mse[i] = me[i] * me[i];
        mean_square_error += (me[i] * me[i]); 
    }
    // Mean Absolute Error Table
    float mae[size], mean_absolute_error;
    for(int i=0; i<size; i++){
        mae[i] = fabs(demand[i] - forcaste[i]);
        mean_absolute_error += fabs(demand[i] - forcaste[i]);
    }
    // Print table
    printf("Duration\tDemand\tForcaste\tMeanError\tMeanSquareError\t  MeanAbsoluteError\n");
    for (int i = 0; i < size; i++){
        printf("%d\t\t%d\t%f\t%f\t%f\t  %f\n", i+1, demand[i], forcaste[i], me[i], mse[i], mae[i]);
    }
    float pred = forcaste[size-1] + alpha * (demand[size-1] - forcaste[size-1]);
    printf("%d\t\t0\t%f", size+1, pred);
    printf("\n");
    // Mean Errors
    printf("Mean Error = %.2f\n", mean_error / size);
    printf("Mean Absolute Error = %.2f\n", mean_absolute_error / size);
    printf("Mean Square Error = %.2f\n", mean_square_error / size);
    printf("Forcaste of %dth month = %.2f", size+1, pred);

}
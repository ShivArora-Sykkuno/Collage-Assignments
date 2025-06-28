#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of the data: ");
    scanf("%d", &size);
    int year[size];
    int  actual_sales[size];

    printf("Enter the years:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &year[i]);
    }
    printf("Enter the actual sales:\n");
    for(int i=0; i<size-1; i++){
        scanf("%d", &actual_sales[i]);
    }
    actual_sales[size-1] = -1;

    int forecast_by_nave_method[size];
    forecast_by_nave_method[0] = 0;
    forecast_by_nave_method[1] = 0;
    forecast_by_nave_method[2] = 0;
    for(int i=3; i<size; i++){
        forecast_by_nave_method[i] = actual_sales[i-1] + actual_sales[i-2] + actual_sales[i-3];
    }
    // Printing the table
    printf("Year\tAcutal Sales\tForecast By Nave Method\n");
    for(int i=0; i<size; i++){
        if (actual_sales[i] == -1){
            printf("%d\t?\t\t%d\n", year[i], forecast_by_nave_method[i]);
        }else{
            printf("%d\t%d\t\t%d\n", year[i], actual_sales[i], forecast_by_nave_method[i]);
        }
    }
    printf("The forcast value of the year %d is %d", year[size-1], forecast_by_nave_method[size-1]);
}
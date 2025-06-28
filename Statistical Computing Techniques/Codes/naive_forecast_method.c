// consider the demand  data for 8 years as given below 
// year   actual_sales  forecast by nave method
/*
1983    100         0   
1984    105         100
1985    103         105
        107 
        109 
        110 
        115 
        117                
-
-
? USE THIS DATA for forecasting the demand  for the year 1991 using naive method

*/
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
    for(int i=1; i<size; i++){
        forecast_by_nave_method[i] = actual_sales[i-1];
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
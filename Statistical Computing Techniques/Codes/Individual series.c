#include<stdio.h>
float mean(int num, int *arr){
    float sum = 0;
    for(int i=0; i<num; i++){
        sum += arr[i];}
    float meann = sum / num;
    return meann;}
float median(int num, int *arr){
    float ans;
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if(arr[i]> arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;} } }
    if(num % 2 == 0){
        int one = num / 2;
        int two = one - 1;
        float x = arr[one];
        float y = arr[two];
        ans = (x + y) / 2;
    }else ans = arr[((num + 1) / 2) - 1];
    return ans;}
int mode(int num, int *arr){
    int max_Value = 0; 
    int max_Count = 0;
    for (int i = 0; i < num; i++){
        int cnt = 0;
        for (int j = 0; j < num; j++){
            if (arr[j] == arr[i])
                cnt++;}
        if (cnt > max_Count){
            max_Count = cnt;
            max_Value = arr[i];}}
    return max_Value;}
void main(){
    int num;     
    printf("Enter the number of observations  ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the values of the observation\n");      
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);}
    float Mean = mean(num, arr);
    float Median = median(num, arr);
    int Mode = mode(num, arr);
    printf("\nMean = %.2f\tMedian = %.2f\tMode = %d", Mean, Median, Mode);
}

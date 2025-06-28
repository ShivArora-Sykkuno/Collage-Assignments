#include<stdio.h>
void main(){
   int seedNum,n1,n2,n3,n;
   printf("Enter the 4 digit seed number : ");
   scanf("%d",&seedNum);
   printf("Enter count to genrate random numbers : ");
   scanf("%d",&n);
   printf("Generated random numbers :\n%d\n",seedNum);
   for(int i=0; i<n ; i++){
      n1=seedNum*seedNum;
      n2=n1/100;
      n3=n2%10000;
      printf("%d\n",n3);
      seedNum=n3;
      }
}
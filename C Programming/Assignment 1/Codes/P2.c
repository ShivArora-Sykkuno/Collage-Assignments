#include<stdio.h>
int main(){
int a, b, c;
printf("SHIV ARORA\n");
printf("Enter Three numbers\n");
scanf("%d%d%d", &a, &b, &c);
if (a > b && a > c) printf("%d is the greater number", a);
else if (b>a && b>c) printf("%d is the greater number", b);
else printf("%d is the greater number", c);
return 0;
}

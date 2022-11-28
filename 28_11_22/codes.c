#include<stdio.h>
int main(){
//Q. 14

int a, b, r, sum = 0;
printf("Enter number : ");
scanf("%d",&a);
b = a;
while(a!=0){
    r = a%10;
    a = a/10;
    sum = sum + r;
}

printf("\nSum of digits of %d is : %d",b,sum);









return 0;
}
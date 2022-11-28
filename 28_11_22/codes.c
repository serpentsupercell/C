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


//Q. 16

int num, rev = 0, rem;
printf("\nEnter number : ");
scanf("%d",&num);

while(num != 0){
    rem = num % 10;
    rev = rev * 10 + rem; 
    num = num / 10;
}

printf("\nReverse is : %d",rev);


//Q. 18

int num2,freqif = 0, freq, rem2;
printf("\nEnter number : ");
scanf("%d",&num2);

printf("\nEnter digit to find frequency of : ");
scanf("%d",&freq);

while (num2!=0){
    rem2 = num2 % 10;
    num2 = num2 / 10;
    if(freq == rem2){
        freqif++;
    }
}

printf("\nFrequency of %d is : %d", freq, freqif);

return 0;
}
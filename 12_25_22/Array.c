#include <stdio.h>
#include<conio.h>
#include<string.h>
int onedarray();
int onedarsum();
int twodarray();
int strings();



int onedarray()
{
int b[5];
int i;
//reading values
printf("Enter value of array : ");
for(i=0;i<5;i++){
    scanf("%d",&b[i]); 
}

for(i=0; i<5;i++){
    printf("%3d", b[i]);
}
return 0;
}

int onedarsum()
{

int ar[]={7,15,100,2,1};
int sum = 0, i;
for(i = 0; i < 5; i++){
    sum = sum + ar[i];
}
printf("Sum of array is : %d", sum);
}


int twodarray()
{

int array[3][3] = {1,2,3,1,2,3,1,2,3};
int array2[3][3] = {1,2,3,1,2,3,1,2,3};
int sum[3][3];
int i,j;

for(i=0; i < 3; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%3d",array[i][j]);
    }
    printf("\n");
}
printf("\n");

for(i=0; i < 3; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%3d",array2[i][j]);
    }
    printf("\n");
}
printf("\n");

for(i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++)
    {
        sum[i][j] = array[i][j] + array2[i][j];
    }
}

for(i=0; i < 3; i++)
{
    for(j = 0 ; j < 3 ; j++)
    {
        printf("%3d",sum[i][j]);
    }
    printf("\n");
}
return 0;
}

int strings()
{


char a[]={'a','b','c','d','\0'};
int i;
for(i = 0; i<5; i++)
{
    printf("%c",a[i]);
}

return 0;
}


int main(){

strings();

return 0;
}
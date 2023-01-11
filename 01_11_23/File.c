#include<stdio.h>
#include<conio.h>
#include<string.h>

int prac();
int prac()
{
FILE *fp;
fp = fopen("Name.txt","r");
char c[50];
fgets(c,50,fp);
printf("%s",c);
fclose(fp);

strcpy(c,"Glacier ");
fp = fopen("Name.txt","a");
fprintf(fp,"%s",c);
fclose(fp);


fp = fopen("Name.txt","r");
fgets(c,50,fp);
printf("%s",c);
fclose(fp);

return 0;
}

//Get numbers from a text file, put even in a new file and put odd in another new file
int numbers();
int numbers()
{
FILE *num, *even, *odd;
int i, n;
num = fopen("Numbers.txt","w");

printf("Enter numbers : ");
for(i = 0 ; i < 10 ; i++)
{
    scanf("%d",&n);
    putw(n,num);
}
fclose(num);

num = fopen("Numbers.txt","r");
even = fopen("Even.txt","w");
odd = fopen("Odd.txt","w");

while((n = getw(num))!= EOF)
{
    if(n % 2 == 0)
    {
        putw(n,even);
    }
    else
    {
        putw(n,odd);
    }
}
fclose(num);
fclose(even);
fclose(odd);


printf("\nEven Numbers : ");
even = fopen("Even.txt","r");
while((n=getw(even))!=EOF){
    printf("%3d",n);
}

printf("\n");

printf("\nOdd Numbers : ");
odd = fopen("Odd.txt","r");
while((n=getw(odd))!=EOF){
    printf("%3d",n);
}



return 0;
}

int main()
{

numbers();

}
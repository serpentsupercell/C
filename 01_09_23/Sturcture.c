#include <stdio.h>
#include <conio.h>
#include <string.h>

struct One
{
    int a;
    float b;
    char c[50];
    double d;
};
int example();
int example()
{
struct One o;
o.a = 15;
o.b = 115.2;
strcpy(o.c,"Serpent");
o.d = 1646.2264634;
printf("%3d %3f %s %f",o.a,o.b,o.c,o.d);

printf("\n");

return 0;
}



struct complex
{
int real;
int img;
}complex;

int complexno();
int complexno()
{
    struct complex cm1,cm2;

printf("\nEnter real part and Imaginary parts of first complex number respectively : ");
scanf("%d %d",&cm1.real, &cm1.img);
printf("\nFirst Complex number is : %d + %di",cm1.real,cm1.img);

printf("\nEnter real part and Imaginary parts of second complex number respectively : ");
scanf("%d %d",&cm2.real, &cm2.img);
printf("\nSecond jComplex number is : %d + %di",cm2.real,cm2.img);


int addition_of_real = cm1.real + cm2.real;
int addition_of_imgaginary = cm1.img + cm2.img;

printf("\nAddition of the two complex numbers is (%d + %di)",addition_of_real, addition_of_imgaginary);

printf("\n");

return 0;
}

int main (){

example();
complexno();



return 0;
}
#include <stdio.h>

int rank;
char file;

int oddeven(rank);

int oddeven(rank)
{

if(rank % 2 == 0)
{
    return 1;     //1 for even
}
else
{
    return 0;     //0 for odd
}
}

int main()
{
printf("\nEnter File : ");
scanf("%c",&file);
printf("\nEnter Rank : ");
scanf("%d",&rank);

if(file == 'a' || file == 'c' || file == 'e' || file == 'g')
{
switch(oddeven(rank))
{
    case 0 : printf("\nDark Square");
    break;

    case 1 : printf("\nLight Square");
    break;

    default : printf("\n");
}
}

else if(file == 'b' || file == 'd' || file == 'f' || file == 'h')
{
switch(oddeven(rank))
{
    case 0 : printf("\nLight Square");
    break;

    case 1 : printf("\nDark Square");
    break;
    
    default : printf("\n");
}
}
else
{
    printf("\nPlease enter correct coordinates.");
}


return 0;
}
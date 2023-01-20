#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int values_of_compNyou();
int game_logic();

char comp, you;

//Generating random outcomes
int values_of_compNyou()
{
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }

    printf("\nTYPE : r for Rock, p for paper and s for scissors : ");
    scanf("%c",&you);
return 0;
}

int game_logic()
{

 int i;
printf("\nComputer chose %c",comp);
if(comp == you)
{
    printf("\nThis game is a draw.");
}

if(comp == 'r' && you == 'p')
{
    printf("\nYou won.");
}

if(comp == 'r' && you == 's')
{
    printf("\nComputer won.");
}

if(comp == 's' && you == 'r')
{
    printf("\nYou won.");
}

if(comp == 's' && you == 'p')
{
    printf("\nComputer won.");
}

if(comp == 'p' && you == 'r')
{
    printf("\nComputer won.");
}

if(comp == 'p' && you == 's')
{
    printf("\nYou won.");
}
return 0;
}

int main()
{
    values_of_compNyou();
    game_logic();

return 0;
}
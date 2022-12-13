//input str check if pelindrome

#include<string.h>
#include<stdio.h>
int main(){

char str1[10],str2[10];
printf("\nEnter a string : ");
gets(str1);
int length = strlen(str1);
printf("\nString length is : %d",length);
strcpy(str2,str1);
strrev(str1);
if (strcmp(str1,str2) == 0)
{
    printf("\n'%s' IS a palindrome",str2);
}
else{
    printf("\n'%s' IS NOT a palindrome",str2);
}


return 0;
}
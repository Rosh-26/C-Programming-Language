#include<stdio.h>

int main()
{
    char ab;
    printf("Enter the char : ");
    scanf("%c",&ab);
    if(65<=ab && ab<=90)
    printf("This char is Big");
    else if(97<=ab && ab<=122)
    printf("This is small");
    else
    printf("Wrong Entry");
    return 0;
}
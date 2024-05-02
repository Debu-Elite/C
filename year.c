// program to find number is leap year or not
#include <stdio.h>

int main() {

    printf("Enter the number\n");
    
    int number;
    scanf("%d",&number);
    if(number%400==0)
    {
        printf("leap year");
    }
    else if(number%4==0&&number%100!=0)
    {
        printf("leap year");
    }
    else 
    {
        printf("not leap year");
    }

    return 0;
}
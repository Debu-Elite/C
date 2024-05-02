// program to find sum of digit
#include <stdio.h>

int main() {

    printf("Enter the number\n");
    
    int number, res;
    scanf("%d",&number);
    printf("enter option 1 for for_loop, 2 for while loop , 3 for do while");
    int op;
    scanf("%d",&op);
    
    switch (op)
    {
    case 1:
    for(;number;)
    {
        res+=number%10;
        number=number/10;
    }
    printf("result=%d",res);
    break;
    case 2:
    
    while(number)
    {
        res+=number%10;
        number=number/10;
    }
    printf("result=%d",res);
    break;

    default :
    printf("default");
    break;
    }
    return 0;
}
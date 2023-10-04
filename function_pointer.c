#include<stdio.h>
int name(char *a);
int data(int *a);

typedef struct 
{
char name1[20];
int roll_number;
int (*set_name)(char *);
int (*set_data)(int *);
}student;

int main()
{

student sahu;
sahu.set_name=name;
sahu.set_data=data;
sahu.set_name(sahu.name1);
sahu.set_data(&sahu.roll_number);
printf("%s\n",sahu.name1);
printf("%d\n",sahu.roll_number);
}
int name(char *a)
{
printf("enter the name please");
scanf("%s",a);
return 0;
}

int data(int *a)
{
printf("enter the data please");
scanf("%d",a);
return 0;
}
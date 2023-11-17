#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
  struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void intser(int data)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}
void print(){
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}

int main() {
    // Write C code here
    printf("Hello world");
    intser(10);
    intser(20);
    intser(30);
    intser(40);
    intser(50);
    print();

    return 0;
}
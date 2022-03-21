#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node nodeq;

nodeq *createnode(int value)
{
    nodeq *ptr = (nodeq *)(malloc(sizeof(nodeq)));
    ptr->data = value;
    ptr->next = NULL;
    return ptr;
}

nodeq *prependnode(nodeq *p1, nodeq *head)
{
    // nodeq *ptr = (nodeq *)(malloc(sizeof(nodeq)));
    p1->next=head;
    // return p1;
}

void printnode(nodeq *head)
{
    nodeq *ptr = (nodeq *)(malloc(sizeof(nodeq)));
    ptr = head;
    while (ptr)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    nodeq *head = NULL;
    nodeq *tail = NULL;
    head = createnode(50);
    printf("the value of head is \n");
    printf("%d\n", head->data);
    int n, i;
    printf("enter the number of nodes you want to add after head");
    scanf("%d", &n);
    tail = head;
    while (n--)
    { 
        printf("give the value of node %d \n",n);
        scanf("%d", &i);
        head=prependnode(createnode(i), head);
    }
    printnode(head);
    return 0;
}
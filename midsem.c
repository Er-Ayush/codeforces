#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *p;
};
void main()
{

    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    n1->data = 12;
    n1->p = NULL;
    n2->data = 15;
    n2->p = n1;
    n2 = n1;
    printf("%d", n2->data);
    free(n2);
}

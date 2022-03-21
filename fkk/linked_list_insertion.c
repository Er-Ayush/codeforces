// PRINT 3,4,5,6,7,8,9

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
// typedef struct node nodeq;

struct node *createnode(int data){
struct node*ptr=(struct node*)(malloc(sizeof(struct node)));
ptr->link=NULL;
ptr->data=data;
return ptr;
}

struct node * insertnodebefore(struct node*HEAD,int value){
    struct node*ptr=(struct node*)(malloc(sizeof(struct node)));
    ptr->data=value;
    ptr->link=HEAD;
    return ptr;
}
void ptransversal(struct node*HEAD){
    struct node*p=(struct node*)(malloc(sizeof(struct node)));
    p=HEAD;
    while(p){
        printf("%d..",p->data);
        p=p->link;
    }
}

int main(){ 
    struct node *HEAD=NULL;
    
    HEAD=createnode(5);
    printf("%d \n",HEAD->data);
    // insert a node after 5
    HEAD=insertnodebefore(HEAD,7);
    ptransversal(HEAD);
    return 0;
}
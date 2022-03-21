#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node nodeq;

 void linkedlistprint(nodeq *ptr){
    while (ptr!=NULL)
    {
        printf("%d \t",ptr->data);
        ptr=ptr->next;

    }
    
}

int main(){
    nodeq *head=NULL;
    nodeq *second=NULL;
    nodeq *third=NULL;
    nodeq *fourth=NULL;
 
 head=(nodeq *)malloc(sizeof(nodeq));
 second=(nodeq *)malloc(sizeof(nodeq));
 third=(nodeq *)malloc(sizeof(nodeq));
 fourth=(nodeq *)malloc(sizeof(nodeq));

 head->data=6;
 head->next=second;
 
 second->data=3;
 second->next=third;
 
 third->data=8;
 third->next=fourth;
 
 fourth->data=5;
 fourth->next=NULL;
 
 linkedlistprint(head);
    return 0;
}
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int main(){
    
    struct node *head = NULL;
    head= (struct node *)malloc(sizeof(struct node));
    struct node *first = NULL;
    first= (struct node *)malloc(sizeof(struct node));
    struct node *scnd = NULL;
    scnd= (struct node *)malloc(sizeof(struct node));

    head->data= 10;
    head->next = first;
    first->data= 20;
    first->next = scnd;
    scnd->data= 30;
    scnd->next = NULL;

    struct node *ptr = head;
    while (ptr!=0)
    {
        cout<<"data : "<<ptr->data<<endl;
        ptr=ptr->next;
    }
    







    
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printkor(struct node *ptr)
{
    int i = 1;

    while (ptr != NULL)
    {
        printf("The element at position %d is : %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

int main()
{

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *two;
    two = (struct node *)malloc(sizeof(struct node));
    struct node *three;
    three = (struct node *)malloc(sizeof(struct node));
    struct node *four;
    four = (struct node *)malloc(sizeof(struct node));
    struct node *five;
    five = (struct node *)malloc(sizeof(struct node));

    head->next = two;
    printf("enter data :\n");
    int dt;
    scanf("%d", &dt);
    head->data = dt;

    two->next = three;
    printf("enter data :\n");
    scanf("%d", &dt);
    two->data = dt;

    three->next = four;
    printf("enter data :\n");
    scanf("%d", &dt);
    three->data = dt;

    four->next = five;
    printf("enter data :\n");
    scanf("%d", &dt);
    four->data = dt;

    five->next = NULL;
    printf("enter data :\n");
    scanf("%d", &dt);

    printkor(head);
}

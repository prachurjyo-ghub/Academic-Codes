#include <stdio.h>
#include <stdlib.h>
struct Node
{   
    int flag;
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *head = NULL;
void insert(int n)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->flag = 0;
    newNode->left = NULL;
    newNode->right = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        struct Node *current = head;
        struct Node *parent = NULL;
        while (current != NULL)
        {
            parent = current;
            if (n < current->data)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }
        }
        if (n < parent->data)

        {
            parent->left = newNode;
        }
        else
        {
            parent->right = newNode;
        }
    }
}

void displayInOrder(struct Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    displayInOrder(temp->left);
    printf("%d ", temp->data);
    displayInOrder(temp->right);
}

void displayPreOrder(struct Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    printf("%d ", temp->data);
    displayPreOrder(temp->left);
    displayPreOrder(temp->right);
}

void displayPostOrder(struct Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    displayPostOrder(temp->left);
    displayPostOrder(temp->right);
    printf("%d ", temp->data);
}

int main()
{
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        insert(x);
    }
    printf("In-order traversal: ");
    displayInOrder(head);
    printf("\n");
    printf("Pre-order traversal: ");
    displayPreOrder(head);
    printf("\n");
    printf("Post-order traversal: ");
    displayPostOrder(head);
    printf("\n");
    return 0;
}
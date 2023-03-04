#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node **head_ref, int nodeNumbers)
{
    struct node *newnode, *temp = NULL;

    for (int i = 1; i <= nodeNumbers; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data for node[%d]: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (*head_ref == NULL)
        {
            *head_ref = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void insertHead(struct node **head_ref)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter data to insert at begining: ");
    scanf("%d", &newnode->data);

    newnode->next = *head_ref;
    *head_ref = newnode;
}

void insertEnd(struct node **head_ref)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter data to insert at End: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp = *head_ref;

    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertPos(struct node **head_ref)
{
    int pos, i = 1;
    struct node *newnode, *temp;

    printf("\nEnter position number where you want to insert: ");
    scanf("%d", &pos);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (pos == 1)
    {
        newnode->next = *head_ref;
        *head_ref = newnode;
        return;
    }

    temp = *head_ref;
    while (temp != NULL && i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Position out of range\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void display(struct node *head)
{
    struct node *temp;
    temp = head;
    int count = 0;

    printf("\nNodes are: \n");
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
        count++;
    }
    printf("NULL");

    printf("\n\nThere are %d Node", count);
    getch();
}

void main()
{

    int nodeNumbers;

    printf("How many node you want: ");
    scanf("%d", &nodeNumbers);

    struct node *head = NULL;

    traverse(&head, nodeNumbers);
    display(head);

    insertHead(&head);
    display(head);

    insertEnd(&head);
    display(head);

    insertPos(&head);
    display(head);
}
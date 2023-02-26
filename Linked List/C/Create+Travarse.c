#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head, *newnode, *temp;
    int choice = 1, count;
    head = 0;

    while (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0,1): ");
        scanf("%d", &choice);
    }

    temp = head;

    printf("Nodes are: \n");
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
        count++;
    }
    printf("NULL");

    printf("\n There are %d Node", count);
}
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
    int choice = 1, count, nodeNumbers;
    head = 0;

    printf("How many node you want: ");
    scanf("%d",&nodeNumbers);

    for (int i = 1; i <=nodeNumbers; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data  for node[%d]: ",i);
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

    printf("\nThere are %d Node", count);
}

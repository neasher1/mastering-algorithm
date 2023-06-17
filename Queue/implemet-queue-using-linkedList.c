#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x);
void dequeue();
void display();
void peek();

int main()
{
    enqueue(5);
    enqueue(20);
    enqueue(100);
    display();
    dequeue();
    peek();
    display();
    dequeue();
    dequeue();
    display();

    return 0;
}

void enqueue(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        struct node *temp = front;
        printf("Dequeued element is %d\n", front->data);
        front = front->next;
        free(temp);
    }

    if (front == NULL)
    {
        rear = NULL;
    }
}

void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element is %d\n", front->data);
}

void display()
{
    struct node *temp;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    else
    {
        temp = front;
        printf("Queue elements are: ");
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

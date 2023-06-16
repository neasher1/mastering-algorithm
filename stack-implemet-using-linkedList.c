#include <stdio.h>
#include <stdlib.h> // Include the necessary header for malloc and free

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL; // Initialize top to NULL

void push(int x);
void display();
void peek();
void pop();

void main()
{
    push(2);
    push(30);
    push(50);
    display();
    peek();
    pop();
    peek();
    display();
}

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Stack Elements are :\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", top->data);
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Underflow condition: Stack is empty\n");
    }
    else
    {
        printf("%d is popped from stack\n", top->data);
        top = top->next;
        free(temp);
    }
}

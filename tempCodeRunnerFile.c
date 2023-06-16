#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

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
    if (top == 0)
    {
        printf("List is empty");
    }

    else
    {
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void peek()
{
    if (top == 0)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("top element is %d", top->data);
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("Underflow condition, Stack is empty");
    }
    else
    {
        printf("%d is popped from stack", top->data);
        top = top->next;
        free(temp);
    }
}
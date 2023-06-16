#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push();
void pop();
void peek();
void display();

void main()
{
    int ch;
    do
    {
        printf("Enter choice: 1.push, 2.pop, 3.peek, 4.display: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("Invalid Choice\n");
        }
    } while (ch != 0);

    getchar();
}

void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);

    if (top == N - 1)
    {
        printf("Overflow Condition: Stack is full\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("Pushed %d into the stack\n", x);
    }
}

void pop()
{
    int item;

    if (top == -1)
    {
        printf("Underflow Condition: Stack is empty\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Popped %d from the stack\n", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Underflow Condition: Stack is empty\n");
    }
    else
    {
        printf("Top of the stack: %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

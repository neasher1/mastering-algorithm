#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x);
void dequeue();
void peek();
void display();

void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
}

void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("Overflow Condition");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition");
    }
    else if (front == rear)
    {
        printf("\nDequeue element is %d", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\nDequeue element is %d", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition, queue is empty");
    }
    else
    {
        printf("\nfront element is %d\n", queue[front]);
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition, queue is empty");
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
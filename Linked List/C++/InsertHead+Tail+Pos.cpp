#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void traverse(node **head_ref, int nodeNumbers)
{
    node *newnode, *temp = nullptr;

    for (int i = 1; i <= nodeNumbers; i++)
    {
        newnode = new node;

        cout << "Enter data for node[" << i << "]: ";
        cin >> newnode->data;
        newnode->next = nullptr;

        if (*head_ref == nullptr)
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

void insertHead(node **head_ref)
{
    node *newnode;
    newnode = new node;

    cout << "\nEnter data to insert at beginning: ";
    cin >> newnode->data;

    newnode->next = *head_ref;
    *head_ref = newnode;
}

void insertEnd(node **head_ref)
{
    node *newnode, *temp;
    newnode = new node;

    cout << "\nEnter data to insert at End: ";
    cin >> newnode->data;
    newnode->next = nullptr;
    temp = *head_ref;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertPos(node **head_ref)
{
    int pos, i = 1;
    node *newnode, *temp;

    cout << "\nEnter position number where you want to insert: ";
    cin >> pos;

    newnode = new node;
    cout << "Enter data: ";
    cin >> newnode->data;
    newnode->next = nullptr;

    if (pos == 1)
    {
        newnode->next = *head_ref;
        *head_ref = newnode;
        return;
    }

    temp = *head_ref;
    while (temp != nullptr && i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == nullptr)
    {
        cout << "Position out of range\n";
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void display(node *head)
{
    node *temp;
    temp = head;
    int count = 0;

    cout << "\nNodes are: \n";
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
        count++;
    }
    cout << "NULL";

    cout << "\n\nThere are " << count << " Nodes\n";
}

int main()
{

    int nodeNumbers;

    cout << "How many nodes do you want: ";
    cin >> nodeNumbers;

    node *head = nullptr;

    traverse(&head, nodeNumbers);
    display(head);

    insertHead(&head);
    display(head);

    insertEnd(&head);
    display(head);

    insertPos(&head);
    display(head);

    return 0;
}

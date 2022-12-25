#include <iostream>
using namespace std;
void ascending(int a[], int n);
void descending(int a[], int n);

int main()
{
    int n = 5;
    int a[n] = {15, 16, 6, 8, 5};

    ascending(a, n);
    descending(a, n);
}

void ascending(int a[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;

        // Ascending Order
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    cout << "Ascending Order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void descending(int a[], int n)
{

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;

        // Descending Order
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break;
        }
    }

    cout << endl
         << "Descending Order: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
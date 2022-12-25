// Need to do it again
#include <iostream>
using namespace std;

void selectionSort(int a[], int n);
void userInput(int num);

int main()
{
    int n = 5;
    int a[n] = {7, 5, 8, 2, 6};
    int b[n] = {1, 52, 2, 22, 62};

    selectionSort(a, n);
    selectionSort(b, n);

    int num;
    cout << "Size of Array: ";
    cin >> num;
    userInput(num);
}

void selectionSort(int a[], int n)
{
    int mini, imin, temp;

    for (int i = 0; i < n; i++)
    {
        mini = a[i];
        imin = i;
        for (int j = i; j < n - 1; j++)
        {
            if (mini > a[j + 1])
            {
                imin = j + 1;
                mini = a[j + 1];
            }
            // cout<<"min: "<<mini<<" imin: "<<imin<<endl;
        }
        // cout<<endl;
        temp = a[i];
        a[i] = mini;
        a[imin] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void userInput(int num)
{

    int c[num];

    for (int i = 0; i < num; i++)
    {
        cin >> c[i];
    }
    selectionSort(c, num);
}
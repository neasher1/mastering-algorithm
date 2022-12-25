#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int a[n] = {15, 5, 20, 35, 2, 42, 67, 17};
    int data = 17;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (data == a[i])
        {
            cout << "Elements found at index " << i << endl;
            cout << "Elements found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Elements not found at array";
    }
}
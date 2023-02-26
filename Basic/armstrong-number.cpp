/*
    153 = 1^3+5^3+3^3 = 1+125+27 = 153;
    input number neowar pore proti ta number er upor ^3 die jog korar pore result jodi
    main number er soman hoy tahole number ti armstrong;
*/
#include <iostream>
using namespace std;

int main()
{
    int num,rem,temp,sum=0;
    cout << "Enter any numbers: ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {

        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;

    }

    if(sum==num)
    cout << num << " armstrong number";

    else
        cout << "Not Armstrong";


}
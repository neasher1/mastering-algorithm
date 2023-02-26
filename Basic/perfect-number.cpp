/*
6 is Perfect Number since divisor of 6 are 1, 2 and 3. Sum of its divisor is
1 + 2+ 3 =6

and 28 is also a Perfect Number
since 1+ 2 + 4 + 7 + 14= 28
*/
#include<iostream>
using namespace std;
int main()
{
   int num, i, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;

   for(i=1; i<num; i++)
   {
      if(num%i==0)
         sum = sum+i;
   }

   if(num==sum)
      cout<<num<<" is a Perfect Number.";
   else
      cout<<num<<" is not a Perfect Number.";

   return 0;
}
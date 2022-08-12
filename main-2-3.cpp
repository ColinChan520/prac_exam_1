#include <iostream>
#include "function-2-3.cpp"
using namespace std;

extern int sum_integers(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);

int main()
{
int length;
cout<<"Enter length : ";
cin>>length;

int a[length];
if(length>1)
{
cout<<"Enter "<<length<<" elements : ";
for(int i=0;i<length;i++)
cin>>a[i];
}
cout<<sum_integers(a,length);
return 0;
}
#include <iostream>
using namespace std;

int sum_integers(int integers[], int length)
{

int sum=0;
if(length<=0) 
return -1;
else 
{
for(int i=0;i<length;i++)
sum = sum + integers[i];
}
return sum;
}
bool is_array_palindrome(int integers[], int length)
{
if(length<=0) 
return false;

for(int i=0;i<length/2;i++)
if(integers[i]!=integers[length-i-1]) 
return false;
return true;
}

int palindrome_sum(int integers[], int length)
{
if(length<=0)
return -1;
if(is_array_palindrome(integers,length))
{

return sum_integers(integers,length);
}
else return -2;
}

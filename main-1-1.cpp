#include <iostream>
#include "function-1-1.cpp"
#include <ostream>
using namespace std;

extern void print_matrix(int array[10][10]);

int main()
{
 int array[10][10] = {0};
 print_matrix(array);
 return 0;
}
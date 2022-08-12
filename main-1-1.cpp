#include <iostream>
#include "function-1-1.cpp"
using namespace std;

extern void print_matrix(int arr[10][10]);

int main()
{
  int arr[10][10];
  for(int i = 0; i < 10; i++)
  {
  	for(int j = 0; j < 10; j++)
  	{
  		cin >> arr[i][j];
  	}
  }
  print_matrix(arr);
  cout << endl;
}
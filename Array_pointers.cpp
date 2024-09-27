// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p++;  *p = 30;
  p++;  *p = 40;
  p++;  *p= 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
//   return 0;
//   cout<< numbers[0]<<endl; 
//   cout<< numbers[1]<<endl;  
//   cout<< numbers[2]<<endl;
//   cout<< numbers[3]<<endl;
//   cout<< numbers[4]<<endl;
//   cout<< p<<endl;
//   cout<< numbers;
}
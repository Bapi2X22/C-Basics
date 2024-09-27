// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}

// // break loop example
// #include <iostream>
// using namespace std;

// int main ()
// {
//   for (int n=10; n>0; n--)
//   {
//     cout << n << ", ";
//     if (n==3)
//     {
//       cout << "countdown aborted!";
//       break;
//     }
//   }
// }
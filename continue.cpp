#include <iostream>
using namespace std;

int main()
{
int j = 0;
int i = 0;
  while (j < 10)
   {
    if (j == 4)
     {
      j++;
      continue;
    }
    cout << j << "\n";
    j++;
   }
     while (i < 10)
    {
    cout << i << "\n";
    i++;
    if (i == 4)
    {
      break;


  }
    }
  return 0;
}

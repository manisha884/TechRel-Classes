#include <iostream>
using namespace std;

int main()
{
 cout << "\n\n Print a mystery series:\n";

	cout << " The series are: \n";
   int no = 1;
   while (true)
   {
      ++no;
      if ((no % 3) == 0)
      continue;
      if (no == 50)
      break;
      if ((no % 2) == 0)
      {
         no += 3;
      }
      else
      {
         no -= 3;
      }
      cout << no << " ";
   }
   cout << endl;
   return 0;
}

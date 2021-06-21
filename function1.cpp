#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway")//with argument
 {
  cout << country << "\n";
}
void myFunction1(string fname) //default Parameter
{
  cout << fname << " Refsnes\n";
}
void myFunction2(string fname, int age)// multiple parameter
 {
  cout << fname << " Refsnes. " << age << " years old. \n";
}
int myFunction(int x, int y) // Function Return Value{
  return x + y;
}

int main() {
  myFunction1("Liam");
  myFunction1("Jenny");
  myFunction1("Anja\n");
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA\n");
  myFunction2("Liam", 3);
  myFunction2("Jenny", 14);
  myFunction2("Anja", 30);
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}





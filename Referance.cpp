#include <iostream>
#include <string>
using namespace std;

int main() {

  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";

  string food1 = "Pizza1";

  cout << &food1;
  return 0;
}

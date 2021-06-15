#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; //Array
  cars[0] = "Opel";
  cout << cars[0];

  string cars1[5];    //Array and Loops
  cars1[0] = "\nSunday";
  cars1[1] = "Monday";
  cars1[2] = "Tuesday";
  cars1[3] = "Wensday";
  cars1[4] = "Thursday";
  for(int i = 0; i < 5; i++) {
    cout << cars1[i] << "\n";
  }

   string car[4] = {"JAVA", "ASP.NET", "Angular", "Python"}; //Omit Array size and Element
  for(int i = 0; i < 4; i++) {
    cout << i << ": " << car[i] << "\n";
  }
  return 0;
}

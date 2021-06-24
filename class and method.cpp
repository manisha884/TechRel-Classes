#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "Hyudai";
  carObj1.model = "Maruti";
  carObj1.year = 1990;

  Car carObj2;
  carObj2.brand = "Bajaj";
  carObj2.model = "Mustang";
  carObj2.year = 1979;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

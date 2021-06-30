#include <iostream>
using namespace std;


class MyClass
 {
  public:
    void myFunction()
    {
      cout << "this is a parent class." ;
    }
};

class MyChild: public MyClass {
public:
    void myFunction1()
    {

        cout<< "\nThis is a child class";
    }

};


class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  myObj.myFunction1();
  return 0;
}

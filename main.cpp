#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x,y, sum;
    cout <<"Please enter the value of x : ";
    cin >> x; //1

    cout << "Please enter the value of  y: ";
    cin >> y;
    sum = x+y;  //2
    cout << endl << "Addition of two number : "<<sum;

    sum = x-y;  //3
    cout << endl << "Substraction of two number : "<<sum;

    sum = x*y;  //3
    cout << endl << "multiplication of two number : "<<sum;

    sum = x/y;  //4
    cout << endl << "Division of two number : "<<sum;

     sum = x%y;  //5
    cout << endl << "modulus of two number : "<<sum;
    return 0;
}

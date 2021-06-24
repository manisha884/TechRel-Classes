#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsis;
		cout << "\n\n Convert temperature in Celsius to Fahrenheit :\n";

    cout << " Input the temperature in Celsius : ";
    cin >> celsis;
   fahrenheit = (celsis * 9.0) / 5.0 + 32;
    cout << " The temperature in Celsius    : " << celsis << endl;
    cout << " The temperature in Fahrenheit : " << fahrenheit << endl;
	cout << endl;
    return 0;
}

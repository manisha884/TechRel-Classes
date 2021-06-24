#include <iostream>
using namespace std;

int main()
{
    float kelvin, fahrenheit;
		cout << "\n\n Convert temperature in Fahrenheit to Kelvin  :\n";
		cout << "---------------------------------------------------\n";
    cout << " Input the temperature in Fahrenheit : ";
    cin >> fahrenheit;
    kelvin = (5.0 / 9) * (fahrenheit - 32) + 273.15;
    cout << " The temperature in Fahrenheit : " << fahrenheit<< endl;
    cout << " The temperature in Kelvin : " << kelvin << endl;
	cout << endl;
    return 0;
}

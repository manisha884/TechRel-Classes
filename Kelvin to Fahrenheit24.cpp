#include <iostream>
using namespace std;

int main()
{
    float kelvin, fahrenheit;
		cout << "\n\n Convert temperature in Kelvin to Fahrenheit  :\n";

    cout << " Input the temperature in Kelvin : ";
    cin >> kelvin;
    fahrenheit = (9.0 / 5) * (kelvin - 273.15) + 32;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
    cout << " The temperature in Fahrenheit : " << fahrenheit << endl;
	cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    float kelvin, celsius;
		cout << "\n\n Convert temperature in Celsius to Kelvin  :\n";

    cout << " Input the temperature in Celsius : ";
    cin >> celsius;
    kelvin = celsius + 273.15;
    cout << " The temperature in Celsius : " << celsius << endl;
    cout << " The temperature in Kelvin : " << kelvin << endl;
	cout << endl;
    return 0;
}

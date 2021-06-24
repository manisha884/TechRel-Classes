#include <iostream>
using namespace std;

int main()
{
    float kelvin, celsius;
		cout << "\n\n Convert temperature in Kelvin to Celsius  :\n";

    cout << " Input the temperature in Kelvin : ";
    cin >> kelvin;
    celsius = kelvin - 273.15;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
    cout << " The temperature in Celsius : " << celsius << endl;
	cout << endl;
    return 0;
}

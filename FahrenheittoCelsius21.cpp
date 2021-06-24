#include <iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;
	cout << "\n\n Convert temperature in Fahrenheit to Celsius :\n";
	cout << "---------------------------------------------------\n";
    cout << " Input the temperature in Fahrenheit : ";
    cin >> fahrenheit;
    celsius = ((fahrenheit * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << fahrenheit << endl;
    cout << " The temperature in Celsius : " << celsius << endl;
	cout << endl;
    return 0;
}

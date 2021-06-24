#include <iostream>
using namespace std;

int main()
{
	cout << "\n\n Swap two no:\n";
	int num1, num2, temp;
	cout << " input 1st no : ";
	cin >> num1 ;
	cout << " input 2nd n0 : ";
	cin >> num2;
	temp=num2;
	num2=num1;
	num1=temp;
    cout << " After swapping the 1st no is : "<< num1 <<"\n" ;
    cout << " After swapping the 2nd no is : "<< num2 <<"\n\n" ;
}

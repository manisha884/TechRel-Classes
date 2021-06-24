#include <iostream>
using namespace std;

int main()
{
int m,i=0;
    cout << "\n\n Print the multiplication table of a number upto 10:\n";
	cout << "--------------------------------------------------------\n";
	cout << " Input a number: ";
	cin>> m;
	for (i=1;i<=10;i++)
	{
	cout << m<<" x "<< i << " = "<<m*i<<"\n" ;
	}

}

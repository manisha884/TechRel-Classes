#include <iostream>
using namespace std;

int main()
{
float area,peri,wid,height=0;
    cout << "\n\n Print the area and perimeter of a rectangle:\n";

	cout << " Input the width of the rectangle: ";
	cin>> wid;
	cout << " Input the height of the rectangle: ";
	cin>> height;
	peri=2 * (wid+height);
	area= height * wid;
	cout<<"The area of the rectangle is: "<<area<<"\n";
	cout<<"The perimeter of the rectangle is: "<<peri<<"\n";
return 0;
}

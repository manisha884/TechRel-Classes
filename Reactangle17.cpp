#include <iostream>
using namespace std;

    int main()
    {
    	int width, length, area, peri;
		cout << "\n\n Find the Area and Perimeter of a Rectangle :\n";
		cout << "-------------------------------------------------\n";
        cout<<" Input the length of the rectangle : ";
    	cin>>length;
		cout<<" Input the width of the rectangle : ";
    	cin>>width;
    	area=(length*width);
		peri=2*(length+width);
        cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< peri << endl;
        cout << endl;
        return 0;
    }

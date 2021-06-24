#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float side1, side2, ang1e, area;
		cout << "\n\n Find the area of Scalene Triangle :\n";

        cout<<" Input the length of a side  of the triangle : ";
    	cin>>side1;
        cout<<" Input the length of another side  of the triangle : ";
    	cin>>side2;
        cout<<" Input the angle between these sides of the triangle : ";
    	cin>>ang1e;
		area = (side1 * side2 * sin((PI/180)*ang1e))/2;
        cout<<" The area of the Scalene Triangle is : "<< area << endl;
        cout << endl;
        return 0;
    }

#include <iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;
	cout << "\n\n Find the third angle of a triangle :\n";
	cout << "-----------------------------------------\n";
    cout<<" Input the 1st angle of the triangle : ";
    cin>>angle1;
    cout<<" Input the 2nd angle of the triangle : ";
    cin>>angle2;
	ang3=180-(angle1+angle2);
    cout << " The 3rd of the triangle is : " << angle3 << endl;
	cout << endl;
    return 0;
}

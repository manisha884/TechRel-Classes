#include <iostream>
using namespace std;

    int main()
    {
    	int rad1,height;
    	float volcylinder;
		cout << "\n\n Calculate the volume of a cylinder :\n";
		cout << "-----------------------------------------\n";
        cout<<" Input the radius of the cylinder : ";
    	cin>>rad1;
		cout<<" Input the height of the cylinder : ";
    	cin>>height;
    	volcylinder=(3.14*rad1*rad1*height);
        cout<<" The volume of a cylinder is : "<< volcylinder << endl;
        cout << endl;
        return 0;
    }

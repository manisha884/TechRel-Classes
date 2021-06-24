#include <iostream>
using namespace std;

    int main()
    {
    	int sid1;
    	float volcube;
		cout << "\n\n Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";
        cout<<" Input the side of a cube : ";
    	cin>>sid1;
    	volcube=(sid1*sid1*sid1);
        cout<<" The volume of a cube is : "<< volcube << endl;
        cout << endl;
        return 0;
    }

#include <iostream>
#include <string>
using namespace std;
int main()
{
string name = "Tom";
string lastname = "Jerry";
string fullname = name+ " " +lastname;
string fullname1 = name.append(lastname);

cout<< fullname1 <<endl;
cout<< fullname;
cout<< "\nlength of fullname: " <<fullname1.size();
cout<< "\n character of fullname : "<<fullname<<endl;

string myString = "TechRel";
myString[0] = 'D';
cout << myString<<endl;
cout << myString[2];
cout<< " \n please enter the fullname : ";
//cin>>fullname;
getline(cin,fullname);
cout<<"\n full name : " << fullname;
return 0;
}

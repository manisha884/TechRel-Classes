#include <iostream>
using namespace std;

long long factorial(int num) {
    if (num == 0) {
        return 1;
        cout<<"Enter the n number"<<endl;
    }
    else {
        return num * factorial(num-1);
        cout<<"The factorial is:"<<endl;
    }
}

int main() {
    int num;
    cin >> num;
    cout << factorial(num) << endl;
}

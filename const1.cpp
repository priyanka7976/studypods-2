#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void printData(){
        cout<<"the complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }

    complex();

};

complex :: complex(){
    a = 5;
    b = 6;
}

int main() {
    complex c,d,b;
    c.printData();
    d.printData();
    b.printData();
    
    return 0;
}
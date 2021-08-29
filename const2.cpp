/*-------- defalut construction

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
    complex p;
    p.printData();
    return 0;
}

*/

//   parameterized construction

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void printData(){
        cout<<"the complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
    complex(int ,int);
};

complex :: complex(int x,int y){
    a = x;
    b = y;
}

int main() {
    //implicit call
    complex a(8,6);
    a.printData();

    //explicit call
    complex b = complex(9,3);
    b.printData();
    return 0;
}
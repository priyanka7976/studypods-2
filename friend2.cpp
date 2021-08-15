#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
      int add(int a, int b){
        return (a + b);
      }

    int sumRealComplex(complex ,complex ) ;
};

class complex{
    int a,b;
    friend int calculator :: sumRealComplex(complex , complex); // permission to access the private data
    public:
        void setNumber(int n1,int n2) {
            a = n1;
            b = n2;
        }
        void printNumber() {
            cout<<"your complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: sumRealComplex(complex o1,complex o2) {
        return (o1.a + o2.a);
    }

int main() {
    complex o1,o2;
    o1.setNumber(5,3);
    // o1.printNumber();

    o2.setNumber(3,0);
    // o1.printNumber();

    calculator cal;
    int real = cal.sumRealComplex(o1,o2);
    cout<<"the sum of both complex number is : "<<real;
        return 0;
}
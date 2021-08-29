#include<iostream>
using namespace std;

class simple{
    int data1,data2;
    public:
    simple(int a,int b = 5){
        data1 = a;
        data2 = b;
    }
    void printData() {
        cout<<"the a and b is : "<<data1<<" , "<<data2;
    }
};

int main() {
    simple s(5,2);
    s.printData();
    simple r(5);
    r.printData();
    return 0;
}
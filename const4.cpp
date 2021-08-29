#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void printData() {
        cout<<"the sum of a and b is : "<<a+b;
    }
     complex(){
         a = 0;
         b = 0;
     }
     complex(int x) {
         a = x;
         b = 0;
     }
     complex(int x, int y){
         a = x;
         b = y;
     }

};

int main() {
    complex c1,c2(5),c3(58,2);
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}
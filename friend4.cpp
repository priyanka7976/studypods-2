#include<iostream>
using namespace std;

class c2;

class c1{
    int value;
    public:
        void inData(int a){
            value = a;
        }
        void display() {
            cout<<value<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

class c2{
    int value2;
    public:
        void inData(int b){
            value2 = b;
        }
        void display() {
            cout<<value2<<endl;
        }
         friend void exchange(c1 &,c2 &);
};

void exchange(c1 & x, c2 & y){
    int temp = x.value;
    x.value = y.value2;
    y.value2 = temp;
}

int main() {
   c1 o1;
   o1.inData(8);
   o1.display();

   c2 o2; 
   o2.inData(6);
   o2.display();

   exchange(o1,o2);

   cout<<"value after exchanging : ";
   o1.display();
   cout<<"value after exchanging : ";
   o2.display();
   
    return 0;
}
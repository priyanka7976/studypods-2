#include<iostream>
using namespace std;

class number {
    int a;
    public:
    number()  {
        a = 0;
    }
        number(int num) {
            a = num;
        }
        number(number &obj) {             //when no copy construction is available then it print defalt value
            cout<<"copy constuction called "<<endl;

            a = obj.a;
        }
        void display()  {
            cout<<"the number of this object :  "<<a<<endl;
        }
};

int main() {
    number x,y,z(78) ,//z2;
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();

    // z2= z   == copy construction is not called
    number z3 = z;  //copy construction is invoked
    z3.dispaly();
    return 0;
}
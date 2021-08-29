#include<iostream>
using namespace std;

int count = 0;

class num{
    public:
        num() {
            count++;
            cout<<"this is the time when construction is called "<<count<<endl;
        }
        ~num() {
            cout<<"this is the time when destruction is called"<<count<<endl;
            count--;
        }
};

int main() {
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first number n1"<<endl;
    num n1;
    {
        cout<<"we entering in the bllock"<<endl;
        cout<<"creating two more numbers "<<endl;
        num n2,num3;
        cout<<"exiting from block"<<endl;
    }
    cout<<"back to main block"<<endl;

    return 0;
}